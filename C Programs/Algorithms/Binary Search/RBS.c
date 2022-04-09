#include <stdio.h>
int search(int arr[], int target);
int pivot(int arr[]);
int binarySearch(int arr[], int target, int start, int end);
int main()
{
    int arr[] = { 9, 0, 1, 2, 3, 4, 6, 8};
    int target = 16;
    int index = search(arr, target);
    if (index == -1)
        printf("%d is not found in the array", target);
    else
        printf("%d is found in the array at index %d", target, index);
}
int search(int arr[], int target)
{
    int p = pivot(arr);
    printf("Pivot index: %d\n", p);
    if (arr[p] == target)
        return p;
    if (p == -1)
        return binarySearch(arr, target, 0, 7);
    if (target >= arr[0])
        return binarySearch(arr, target, 0, p - 1);
    else if (target <= arr[7])
        return binarySearch(arr, target, p + 1, 7);
}
int pivot(int arr[])
{
    if(arr[0]<arr[7])
    return -1;
    int start = 0;
    int end = 7;
    while (start <= end)
    {
        int mid = start + (end - start) / 2;
        if (arr[mid] > arr[mid + 1])
            return mid;
        if (arr[mid] < arr[mid - 1])
            return mid - 1;
        if (mid > start && arr[mid] < arr[start])
            end = mid - 1;
        else if (mid < end && arr[mid] > arr[end])
            start = mid + 1;
    }
    return -1;
}
int binarySearch(int arr[], int target, int start, int end)
{
    while (start <= end)
    {
        int mid = start + (end - start) / 2;
        if (arr[mid] == target)
            return mid;
        else if (target < arr[mid])
            end = mid - 1;
        else
            start = mid + 1;
    }
    return -1;
}
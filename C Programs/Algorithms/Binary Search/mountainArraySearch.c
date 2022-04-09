#include <stdio.h>
int search(int arr[], int target);
int peakIndex(int arr[]);
int binarySearch(int arr[], int target, int start, int end);
int main()
{
    int arr[] = {24, 45, 67, 85, 105, 76, 53, 12};
    int target = 24;
    int index = search(arr, target);
    if (index == -1)
        printf("%d is not found in the array", target);
    else
        printf("%d is found in the array at index %d", target, index);
}
int search(int arr[], int target)
{
    int pI = peakIndex(arr);
    int firstTry = binarySearch(arr, target, 0, pI);
    int secondTry = binarySearch(arr, target, pI, 7);
    if (firstTry == -1)
        return secondTry;
    else
        return firstTry;
}
int peakIndex(int arr[])
{
    int start = 0;
    int end = 7;
    while (start <= end)
    {
        int mid = start + (end - start) / 2;
        if (arr[mid] > arr[mid + 1])
            end = mid - 1;
        if (arr[mid] < arr[mid + 1])
            start = mid + 1;
    }
    return start;
}
int binarySearch(int arr[], int target, int start, int end)
{
    if (arr[start] < arr[end])
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
    }
    else if (arr[start] > arr[end])
    {
        while (start <= end)
        {
            int mid = start + (end - start) / 2;
            if (arr[mid] == target)
                return mid;
            else if (target < arr[mid])
                start = mid + 1;
            else
                end = mid - 1;
        }
    }
    return -1;
}
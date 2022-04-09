#include <stdio.h>
int binarySearch(int arr[], int target);
int main()
{
    int arr[] = {0, 1, 2, 3, 4, 6, 8, 9};
    int target = 8;
    int index = binarySearch(arr, target);
    if (index == -1)
        printf("%d is not found in the array", target);
    else
        printf("%d is found in the array at index %d", target, index);
}
int binarySearch(int arr[], int target)
{
    int start = 0;
    int end = 7;
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
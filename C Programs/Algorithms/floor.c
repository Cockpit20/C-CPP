#include <stdio.h>
int find_floor(int arr[], int target);
int main()
{
    int arr[] = {12, 34, 75, 89, 123, 356, 678, 788};
    int target = 110;
    int index = find_floor(arr, target);
    if (index == -1)
        printf("%d has no floor in the array", target);
    else
        printf("Floor of %d in the array is %d", target, arr[index]);
}
int find_floor(int arr[], int target)
{
    int start = 0;
    int end = 7;
    if (target < arr[start])
        return -1;
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
    return end;
}
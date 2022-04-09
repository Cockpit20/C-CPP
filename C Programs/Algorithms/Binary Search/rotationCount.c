#include <stdio.h>
int pivot(int arr[]);
int main()
{
    int arr[] = {2, 3, 4, 6, 8, 9, 0, 1};
    int rc = pivot(arr) + 1;
    printf("Rotation Count is : %d", rc);
}
int pivot(int arr[])
{
    if (arr[0] < arr[7])
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
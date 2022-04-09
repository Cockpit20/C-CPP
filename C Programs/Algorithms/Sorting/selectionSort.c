#include <stdio.h>
void selectionSort(int arr[]);
int findMaxIndex(int arr[], int lastIndex);
void swap(int arr[], int a, int b);
int main()
{
    int arr[] = {64, 23, 75, 32, 8};
    for (int i = 0; i <= 4; i++)
    {
        printf("%d ", arr[i]);
    }
    printf("\n");
    selectionSort(arr);
    for (int i = 0; i <= 4; i++)
    {
        printf("%d ", arr[i]);
    }
}
void selectionSort(int arr[])
{
    for (int i = 0; i <= 3; i++)
    {
        int lastIndex = 4 - i;
        int maxIndex = findMaxIndex(arr, lastIndex);
        swap(arr, maxIndex, lastIndex);
    }
}
int findMaxIndex(int arr[], int lastIndex)
{
    int max = arr[0];
    int maxIndex = 0;
    for (int i = 0; i <= lastIndex; i++)
    {
        if (arr[i] > max)
        {
            max = arr[i];
            maxIndex = i;
        }
    }
    return maxIndex;
}
void swap(int arr[], int a, int b)
{
    int temp = arr[a];
    arr[a] = arr[b];
    arr[b] = temp;
}
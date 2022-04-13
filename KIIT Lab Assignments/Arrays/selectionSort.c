#include <stdio.h>
void selectionSort(int arr[]);
int findMaxIndex(int arr[], int lastIndex);
void swap(int arr[], int a, int b);
int main()
{
    int arr[] = {17, 24, 14, 1, 29};
    selectionSort(arr);
    for (int i = 0; i <= 4; i++)
    {
        printf("%d ", arr[i]);
    }
}
void selectionSort(int arr[])
{
    for (int i = 0; i <= 4; i++)
    {
        int lastIndex = 4 - i;
        int maxIndex = findMaxIndex(arr, lastIndex);
        swap(arr, lastIndex, maxIndex);
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
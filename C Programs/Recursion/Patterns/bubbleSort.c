#include <stdio.h>
void swap(int arr[], int a, int b);
void bubbleSort(int arr[], int r, int c);
int main()
{
    int arr[] = {3, 1, 5, 2, 4};
    bubbleSort(arr, 4, 0);
    for (int i = 0; i < 5; i++)
    {
        printf("%d ", arr[i]);
    }
}
void bubbleSort(int arr[], int r, int c)
{
    if (r == 0)
        return;
    if (c < r)
    {
        if (arr[c] > arr[c + 1])
            swap(arr, c, c + 1);
        bubbleSort(arr, r, c + 1);
    }
    else
    {
        bubbleSort(arr, r - 1, 0);
    }
}
void swap(int arr[], int a, int b)
{
    int temp = arr[a];
    arr[a] = arr[b];
    arr[b] = temp;
}
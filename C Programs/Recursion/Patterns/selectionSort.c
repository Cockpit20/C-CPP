#include <stdio.h>
void swap(int arr[], int a, int b);
void selectionSort(int arr[], int r, int c, int max);
int main()
{
    int arr[] = {41, 51, 29, 62, 32};
    selectionSort(arr, 5, 0, 0);
    for (int i = 0; i < 5; i++)
    {
        printf("%d ", arr[i]);
    }
}
void selectionSort(int arr[], int r, int c, int max)
{
    if (r == 0)
        return;
    if (c < r)
    {
        if (arr[c] > arr[max])
            selectionSort(arr, r, c + 1, c);
        else
            selectionSort(arr, r, c + 1, max);
    }
    else
    {
        swap(arr, r - 1, max);
        selectionSort(arr, r - 1, 0, 0);
    }
}
void swap(int arr[], int a, int b)
{
    int temp = arr[a];
    arr[a] = arr[b];
    arr[b] = temp;
}
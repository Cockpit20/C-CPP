#include <stdio.h>
void bubbleSort(int arr[]);
void swap(int arr[], int a, int b);
int main()
{
    int arr[] = {41, 23, 32, 27, 30};
    for (int i = 0; i <= 4; i++)
    {
        printf("%d ", arr[i]);
    }
    printf("\n");
    bubbleSort(arr);
    for (int i = 0; i <= 4; i++)
    {
        printf("%d ", arr[i]);
    }
}
void bubbleSort(int arr[])
{
    for (int i = 0; i <= 3; i++)
    {
        for (int j = i + 1; j >= 1; j--)
        {
            if (arr[j] < arr[j - 1])
                swap(arr, j, j - 1);
        }
    }
}
void swap(int arr[], int a, int b)
{
    int temp = arr[a];
    arr[a] = arr[b];
    arr[b] = temp;
}
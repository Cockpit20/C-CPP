#include <stdio.h>
void swap(int *arr, int a, int b)
{
    int temp = *(arr + a);
    *(arr + a) = *(arr + b);
    *(arr + b) = temp;
}
void sort(int *arr, int n)
{
    for (int i = 0; i <= n - 2; i++)
    {
        for (int j = 1; j <= n - i - 1; j++)
        {
            if (*(arr + j) < *(arr + (j - 1)))
                swap(arr, j, j - 1);
        }
    }
}
int main()
{
    int arr[100];
    int size;
    printf("Enter the size of the array: ");
    scanf("%d", &size);
    for (int i = 0; i < size; i++)
    {
        printf("Enter element %d: ", i + 1);
        scanf("%d", &arr[i]);
    }
    sort(arr, size);
    for (int i = 0; i < size; i++)
    {
        printf("%d ", arr[i]);
    }
}
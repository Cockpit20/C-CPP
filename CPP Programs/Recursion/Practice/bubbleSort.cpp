#include <iostream>
using namespace std;

void swap(int arr[], int a, int b)
{
    int temp = arr[a];
    arr[a] = arr[b];
    arr[b] = temp;
}

void pattern(int arr[], int row, int col)
{
    if (row == 0)
    {
        return;
    }
    if (col < row)
    {
        if (arr[col] > arr[col + 1])
        {
            swap(arr, col, col + 1);
        }
        pattern(arr, row, col + 1);
    }
    else
    {
        pattern(arr, row - 1, 0);
    }
}

int main()
{
    int arr[] = {5, 4, 3, 2, 1};
    pattern(arr, 5, 0);
    for (int i = 0; i < 5; i++)
    {
        printf("%d ", arr[i]);
    }
}
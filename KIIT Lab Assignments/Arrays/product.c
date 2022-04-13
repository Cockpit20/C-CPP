#include <stdio.h>
int main()
{
    int arr[] = {1, 2, 3, 4, 5};
    int p = 1;
    for (int i = 0; i < 5; i++)
    {
        p = p * arr[i];
    }
    int arr2[5];
    for (int i = 0; i < 5; i++)
    {
        arr2[i] = p / arr[i];
    }
    for (int i = 0; i < 5; i++)
    {
        printf("%d ", arr2[i]);
    }
}
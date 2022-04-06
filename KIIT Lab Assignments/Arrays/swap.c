#include <stdio.h>
int main()
{
    int n, temp;
    printf("Enter the number of elements in the array:");
    scanf("%d", &n);
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        printf("Enter number %d:", i + 1);
        scanf("%d", &arr[i]);
    }
    if (n % 2 == 0)
    {
        for (int i = 0; i < n; i += 2)
        {
            temp = arr[i];
            arr[i] = arr[i + 1];
            arr[i + 1] = temp;
        }
    }
    else
    {
        for (int i = 0; i < n - 1; i += 2)
        {
            temp = arr[i];
            arr[i] = arr[i + 1];
            arr[i + 1] = temp;
        }
    }
    for (int i = 0; i < n; i++)
    {
        printf("%d ", arr[i]);
    }
}
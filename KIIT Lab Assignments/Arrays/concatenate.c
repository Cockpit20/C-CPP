#include <stdio.h>
int main()
{
    int n;
    printf("Enter the number of elements in the array 1:");
    scanf("%d", &n);
    int arr1[n];
    for (int i = 0; i < n; i++)
    {
        printf("Enter number %d:", i + 1);
        scanf("%d", &arr1[i]);
    }
    int m;
    printf("Enter the number of elements in the array 2:");
    scanf("%d", &m);
    int arr2[m];
    for (int i = 0; i < m; i++)
    {
        printf("Enter number %d:", i + 1);
        scanf("%d", &arr2[i]);
    }
    int arr3[m + n];
    for (int i = 0; i < (m + n); i++)
    {
        if (i < n)
            arr3[i] = arr1[i];
        else
            arr3[i] = arr2[i - n];
    }
    for (int i = 0; i < (m + n); i++)
    {
        printf("%d ", arr3[i]);
    }
}
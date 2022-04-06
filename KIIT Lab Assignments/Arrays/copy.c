#include <stdio.h>
int main()
{
    int n;
    printf("Enter the number of elements in the array:");
    scanf("%d", &n);
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        printf("Enter number %d:", i + 1);
        scanf("%d", &arr[i]);
    }
    int arr2[n];
    for (int i = 0; i < n; i++)
    {
        arr2[i]=arr[i];
    }
    for (int i = 0; i < n; i++)
    {
        printf("%d ",arr2[i]);
    }
}
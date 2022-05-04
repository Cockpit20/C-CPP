#include <stdio.h>
int main()
{
    int arr[5];
    for (int i = 0; i < 5; i++)
    {
        printf("Enter number %d:", i + 1);
        scanf("%d", &arr[i]);
    }
    int arr2[5];
    for (int i = 0; i < 5; i++)
    {
        arr2[i] = arr[5 - i - 1];
    }
    printf("Original Array: ");
    for (int i = 0; i < 5; i++)
    {
        printf("%d ", arr[i]);
    }
    printf("\nCopied Array: ");
    for (int i = 0; i < 5; i++)
    {
        printf("%d ", arr2[i]);
    }
}
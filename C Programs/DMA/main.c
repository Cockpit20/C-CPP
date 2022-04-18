#include <stdio.h>
#include <stdlib.h>

int main()
{
    //-------------------MALLOC-------------------

    // int *ptr;
    // int n;
    // scanf("%d",&n);
    // ptr = (int *)malloc(3 * sizeof(int));
    // for (int i = 0; i < 3; i++)
    // {
    //     scanf("%d", &*(ptr + i));
    // }
    // for (int i = 0; i < 3; i++)
    // {
    //     printf("%d ", *(ptr + i));
    // }

    //-------------------CALLOC-------------------

    int *ptr;
    int n;
    printf("Enter the size of the array:");
    scanf("%d", &n);
    ptr = (int *)calloc(n, sizeof(int));
    for (int i = 0; i < n; i++)
    {
        printf("Enter number %d:",i+1);
        scanf("%d", &ptr[i]);
    }
    for (int i = 0; i < n; i++)
    {
        printf("%d ", ptr[i]);
    }

    // -------------------REALLOC-------------------

    printf("\nEnter the new size of the array:");
    scanf("%d", &n);
    ptr = (int *)realloc(ptr, n * sizeof(int));
    for (int i = 0; i < n; i++)
    {
        printf("Enter number %d:",i+1);
        scanf("%d", &ptr[i]);
    }
    for (int i = 0; i < n; i++)
    {
        printf("%d ", ptr[i]);
    }

    // -------------------FREE-------------------

    free(ptr);
}
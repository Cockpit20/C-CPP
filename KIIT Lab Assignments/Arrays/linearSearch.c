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
    int target;
    printf("Enter the element to be searched in the array:");
    scanf("%d", &target);
    int c = 0;
    int index;
    for (int i = 0; i < 5; i++)
    {
        if (target == arr[i])
            c++;
    }
    if (c == 0)
        printf("%d is not found in the array", target);
    else
        printf("%d is found in the array %d times", target, c);
}
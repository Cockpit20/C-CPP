#include<stdio.h>
int main()
{
    int arr[100];
    int n;
    printf("Enter  the size of the array:");
    scanf("%d",&n);
    int *b=arr;
    for (int i = 0; i < n; i++)
    {
        printf("Enter element %d :",i+1);
        scanf("%d",b+i);
    }
    for (int i = 0; i < n; i++)
    {
        printf("%d ",*(b+i));
    }
}
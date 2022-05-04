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
    int sum=0;
    for (int i = 0; i < n; i++)
    {
        sum=sum+*(b+i);
    }
    printf("The sum of the elements of the array is %d",sum);
}
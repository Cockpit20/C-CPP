#include<stdio.h>
int main()
{
    int n;
    printf("Enter the number of elements in the array:");
    scanf("%d",&n);
    int arr[n];
    for(int i=0;i<n;i++)
    {
        printf("Enter number %d:",i+1);
        scanf("%d",&arr[i]);
    }
    int se=0,so=0;
    for(int i=0;i<n;i++)
    {
        if(arr[i]%2==0)
        se=se+arr[i];
        else
        so=so+arr[i];
    }
    printf("Sum of odd numbers in the array is %d\n",so);
    printf("Sum of even numbers in the array is %d\n",se);
    for(int i=0;i<n;i++)
    {
        if(so>se && arr[i]%2!=0)
        printf("%d ",arr[i]);
        else if(se>so && arr[i]%2==0)
        printf("%d ",arr[i]);
    }
}
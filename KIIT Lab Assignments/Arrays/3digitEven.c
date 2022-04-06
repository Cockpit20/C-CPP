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
    for(int i=0;i<n;i++)
    {
        int b=arr[i];
        int c=0;
        while(b>0)
        {
            c++;
            b=b/10;
        }
        if(c==3 && arr[i] %2==0)
        printf("%d ",arr[i]);
    }
}
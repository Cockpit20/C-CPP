#include<stdio.h>
int findMin();
int main()
{
    int min=findMin();
    printf("The second smallest element in the array is %d",min);
}
int findMin()
{
    int n[5];
    for (int i=0;i<5;i++)
    {
        printf("Enter number %d:",i+1);
        scanf("%d",&n[i]);
    }
    int min=n[0];
    int max=n[0];
    for (int i=0;i<5;i++)
    {
        if(n[i]<min)
        min=n[i];
        if(n[i]>max)
        max=n[i];
    }
    int min2=max;
    for (int i=0;i<5;i++)
    {
        if(n[i]<min2 && n[i]>min)
        min2=n[i];
    }
    return min2;
}
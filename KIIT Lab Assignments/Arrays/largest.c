#include<stdio.h>
int findMax();
int findMin();
int main()
{
    int max=findMax();
    printf("The largest element in the array is %d\n",max);
    int min=findMin();
    printf("The smallest element in the array is %d",min);
}
int findMax()
{
    int n[5];
    for (int i=0;i<5;i++)
    {
        printf("Enter number %d:",i+1);
        scanf("%d",&n[i]);
    }
    int max=n[0];
    for (int i=0;i<5;i++)
    {
        if(n[i]>max)
        max=n[i];
    }
    return max;
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
    for (int i=0;i<5;i++)
    {
        if(n[i]<min)
        min=n[i];
    }
    return min;
}
#include<stdio.h>
int large_sum(int *a,int *b,int n,int start);
int main()
{
    int x[20],y[20],g;
    int n;
    printf("Enter the number of elements:");
    scanf("%d",&n);
    printf("Enter the elements of array 1:\n");
    for (int i = 0; i < n; i++)
    {
        printf("Enter element %d:",i+1);
        scanf("%d",&x[i]);
    }
    printf("Enter the elements of array 2:\n");
    for (int i = 0; i < n; i++)
    {
        printf("Enter element %d:",i+1);
        scanf("%d",&y[i]);
    }
    int start;
    printf("Enter the start position:");
    scanf("%d",&start);
    g=large_sum(x+start,y+start,n,start);
    if(!g)
    printf("Both sums are equal");
    else if(g==1)
    printf("x is greater than y");
    else
    printf("y is greater than x");
}
int large_sum(int *a,int *b,int n,int start)
{
    int i,s1=0,s2=0;
    for (int i = 0; i < n-start; i++)
    {
        s1=s1+*(a+i);
        s2=s2+*(b+i);
    }
    if(s1==s2)
    return 0;
    else if(s1>s2)
    return 1;
    else
    return 2;
}
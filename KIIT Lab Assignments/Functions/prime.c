#include<stdio.h>
int isPRIME(int);
int main()
{
    int n;
    printf("Enter the value of n:");
    scanf("%d",&n);
    for (int i=1;i<=n;i++)
    {
        if (i==isPRIME(i))
        printf("%d ",i);
    }
}
int isPRIME(int n)
{
    int c=0;
    for (int i=1;i<=n;i++)
    {
        if (n%i==0)
        c=c+1;
    }
    if (c==2)
    return n;
}
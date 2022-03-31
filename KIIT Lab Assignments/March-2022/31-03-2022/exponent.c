#include<stdio.h>
int main()
{
    int x,n,y=1;
    printf("Enter the value of x: ");
    scanf("%d",&x);
    printf("Enter the value of n: ");
    scanf("%d",&n);
    for (int i=1;i<=n;i++)
    {
        y=y*x;
    }
    printf("y=%d^%d=%d",x,n,y);
}
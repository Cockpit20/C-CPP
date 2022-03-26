#include<stdio.h>
int fact(int n);
int main()
{
    int n,r;
    printf("Enter the value of n:");
    scanf("%d",&n);
    printf("Enter the value of r:");
    scanf("%d",&r);
    int nCr=fact(n)/(fact(r)*fact(n-r));
    printf("nCr of %dC%d is %d",n,r,nCr);
}
int fact(int n)
{
    int f=1;
    for (int i=1;i<=n;i++)
    {
        f=f*i;
    }
    return f;
}
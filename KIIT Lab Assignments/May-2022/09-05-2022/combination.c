#include<stdio.h>
int calculate(int n,int r);
int fact(int n);
int main()
{
    int n,r;
    printf("Enter the value of n and r:");
    scanf("%d %d",&n,&r);
    printf("%dC%d = %d",n,r,calculate(n,r));
}
int calculate(int n,int r)
{
    return fact(n)/(fact(r)*fact(n-r));
}
int fact(int n)
{
    if (n == 0 || n == 1)
        return 1;
    return n * fact(n - 1);
}
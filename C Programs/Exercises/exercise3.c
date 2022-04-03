#include<stdio.h>
int fib(int n);
int fib_recursive(int n);
int main()
{
    int n;
    printf("Enter the term number:");
    scanf("%d",&n);
    printf("The %d term of the fibonacci series is %d",n,fib(n));
}
int fib(int n)
{
    if(n==0||n==1)
    return n;
    int a=0,b=1,c;
    for(int i=2;i<=n;i++)
    {
        c=a+b;
        a=b;
        b=c;
    }
    return c;
}
int fib_recursive(int n)
{
    if(n==0||n==1)
    return n;
    else
    return (fib_recursive(n-1)+fib_recursive(n-2));
}
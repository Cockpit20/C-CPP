#include<stdio.h>
int fib_recursive(int n);
int main()
{
    int n;
    printf("Please enter a number:");
    scanf("%d",&n);
    printf("The factorial of %d is %d",n,fib_recursive(n));
}
int fib_recursive(int n)
{
    if(n==0||n==1)
    return n;
    else
    return fib_recursive(n-1)+fib_recursive(n-2);
}
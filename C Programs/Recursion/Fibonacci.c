#include<stdio.h>
int fibonacci(int a,int b,int n,int i);
int main()
{
    int a=0;
    int b=1;
    int i=2;
    int n;
    printf("Enter term number:");
    scanf("%d",&n);
    printf("The term %d of fibonacci series is %d",n,fibonacci(a,b,n,i));
}
int fibonacci(int a,int b,int n,int i)
{
    if(n==0||n==1)
    return n;
    if(i<n)
    fibonacci(b,a+b,n,i+1);
    else
    return a+b;
}
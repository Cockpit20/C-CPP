#include<stdio.h>
int fibonacci(int n);
int main()
{
    for (int i=0;i<=10; i++)
    {
        printf("%d ",fibonacci(i));
    }
}
int fibonacci(int n)
{
    if(n==0||n==1)
    return n;
    return fibonacci(n-1)+fibonacci(n-2);
}
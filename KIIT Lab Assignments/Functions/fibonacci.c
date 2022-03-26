#include<stdio.h>
int fib(int);
int main()
{
int n;
printf("\nEnter term number :");
scanf("%d",&n);
printf("\nThe value of the term-%d of Fibonacci sequence is %d.", n, fib(n));
}

// int fib(int n)
// {
//     int i,a=0,b=1,c;
//     for(i=1; i<=n-2; i++)
//         {
//         c=a+b;
//         a=b;
//         b=c;
//         }
//         return c;
// }

int fib(int i)
{
    if(i==0 || i==1)
    return (i);
    else
    return (fib(i-1)+ fib(i-2));
}

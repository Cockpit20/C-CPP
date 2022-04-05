#include<stdio.h>
int SOD_recursive(int n);
int main()
{
    int n;
    printf("Please enter a number:");
    scanf("%d",&n);
    printf("The sum of digits of %d is %d",n,SOD_recursive(n));
}
int SOD_recursive(int n)
{
    if(n/10==0)
    return n;
    else
    return (n%10+SOD_recursive(n/10));
}

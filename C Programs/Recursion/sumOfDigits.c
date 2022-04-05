#include<stdio.h>
int sod_recursive(int n);
int main()
{
    int n;
    printf("Enter a number:");
    scanf("%d",&n);
    printf("Sum of digits in %d is %d",n,sod_recursive(n));
}
int sod_recursive(int n)
{
    if(n/10==0)
    return n;
    else
    return n%10+sod_recursive(n/10);
}
#include<stdio.h>
int sum_recursive(int n);
int main()
{
    int n;
    printf("Enter the value of n:");
    scanf("%d",&n);
    printf("The sum of first %d natural numbers is %d",n,sum_recursive(n));
}
int sum_recursive(int n)
{
    if(n==1||n==0)
    return n;
    else
    return n+sum_recursive(n-1);
}
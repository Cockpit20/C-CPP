#include<stdio.h>
int fact_recursive(int n);
int main()
{
    int n;
    printf("Please enter a number:");
    scanf("%d",&n);
    printf("The factorial of %d is %d",n,fact_recursive(n));
}
int fact_recursive(int n)
{
    if(n==0||n==1)
    return 1;
    else
    return n*fact_recursive(n-1);
}
#include<stdio.h>
int dc_recursive(int n);
int main()
{
    int n;
    printf("Enter a number:");
    scanf("%d",&n);
    printf("Number of digits in %d is %d",n,dc_recursive(n));
}
int dc_recursive(int n)
{
    if(n/10==0)
    return 1;
    return 1+dc_recursive(n/10);
}
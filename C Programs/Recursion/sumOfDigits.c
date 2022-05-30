#include<stdio.h>
int sod_recursive(int n);
int pod_recursive(int n);
int main()
{
    int n;
    printf("Enter a number:");
    scanf("%d",&n);
    printf("Sum of digits in %d is %d",n,sod_recursive(n));
    printf("\nProduct of digits in %d is %d",n,pod_recursive(n));
}
int sod_recursive(int n)
{
    if(n/10==0)
    return n;
    return n%10+sod_recursive(n/10);
}
int pod_recursive(int n)
{
    if(n/10==0)
    return n;
    return n%10*pod_recursive(n/10);
}
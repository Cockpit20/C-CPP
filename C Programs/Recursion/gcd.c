#include<stdio.h>
int gcd_recursive(int n1,int n2);
int main()
{
    int a,b;
    printf("Enter 2 numbers:");
    scanf("%d %d",&a,&b);
    printf("The GCD of %d and %d is %d",a,b,gcd_recursive(a,b));
}
int gcd_recursive(int n1,int n2)
{
    if(n1%n2==0)
    return n2;
    else
    return gcd_recursive(n2,n1%n2);
}
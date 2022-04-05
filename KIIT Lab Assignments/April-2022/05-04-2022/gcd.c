#include<stdio.h>
int gcd_recursive(int a,int b);
int main()
{
    int a,b;
    printf("Please enter 2 numbers:");
    scanf("%d %d",&a,&b);
    int gcd=a>b?gcd_recursive(a,b):gcd_recursive(b,a);
    printf("The gcd of %d and %d is %d",a,b,gcd);
}
int gcd_recursive(int a,int b)
{
    if(a%b==0)
    return b;
    else
    return gcd_recursive(b,a%b);
}
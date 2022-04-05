#include<stdio.h>
int gcd_recursive(int n1,int n2);
int main()
{
    int a,b,c;
    printf("Please enter 3 numbers:");
    scanf("%d %d %d",&a,&b,&c);
    int gcd=a>b?gcd_recursive(a,b):gcd_recursive(b,a);
    int gcd2=gcd>c?gcd_recursive(gcd,c):gcd_recursive(c,gcd);
    printf("The gcd of %d, %d and %d is %d",a,b,c,gcd2);
}
int gcd_recursive(int n1,int n2)
{
    if(n1%n2==0)
    return n2;
    else
    return gcd_recursive(n2,n1%n2);
}
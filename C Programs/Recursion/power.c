#include<stdio.h>
int exp_recursive(int n1,int n2);
int main()
{
    int a,b;
    printf("Enter 2 numbers:");
    scanf("%d %d",&a,&b);
    printf("%d^%d = %d",a,b,exp_recursive(a,b));
}
int exp_recursive(int n1,int n2)
{
    if(n2==0)
    return 1;
    else if(n2==1)
    return n1;
    else
    return n1*exp_recursive(n1,n2-1);
}
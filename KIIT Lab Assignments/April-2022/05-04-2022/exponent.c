#include<stdio.h>
int exp_recursive(int a,int b);
int main()
{
    int a,b;
    printf("Enter the value of a and b:");
    scanf("%d %d",&a,&b);
    printf("%d^%d=%d",a,b,exp_recursive(a,b));
}
int exp_recursive(int a,int b)
{
    if(b==1)
    return a;
    else if(b==0)
    return 1;
    else
    return a*exp_recursive(a,b-1);
}
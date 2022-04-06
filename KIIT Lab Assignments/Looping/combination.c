#include<stdio.h>
int fact(int num);
int main()
{
    int n,r;
    printf("Enter the value of n:");
    scanf("%d",&n);
    printf("Enter the value of r:");
    scanf("%d",&r);
    int c=fact(n)/(fact(r)*fact(n-r));
    printf("Value of %dC%d is %d",n,r,c);
}
int fact(int num)
{
    if(num==0||num==1)
    return 1;
    else
    return num*fact(num-1);
}
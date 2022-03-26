#include<stdio.h>
int main(void)
{
    int n1,n2;
    printf("Enter two numbers: ");
    scanf("%d%d",&n1,&n2);
    int s=n1+n2;
    printf("The sum of %d and %d is %d.",n1,n2,s);
}
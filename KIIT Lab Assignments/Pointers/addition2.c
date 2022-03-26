#include<stdio.h>
#include<stdlib.h>
int ADDITION(int *,int *);
int main()
{
    int n1,n2,sum;
    printf("Enter two numbers: ");
    scanf("%d %d",&n1,&n2);
    sum=ADDITION(&n1,&n2);
    printf("%d + %d =%d",n1,n2,sum);
}
int ADDITION(int *x,int *y)
{
    int sum=*x+*y;
    return sum;
}
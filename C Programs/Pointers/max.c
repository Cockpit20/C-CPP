#include<stdio.h>
int max(int *x,int *y);
int main()
{
    int n1,n2;
    printf("Enter 2 numbers:");
    scanf("%d %d",&n1,&n2);
    printf("The maximum number between %d and %d is %d",n1,n2,max(&n1,&n2));
}
int max(int *x,int *y)
{
    if(*x>*y)
    return *x;
    else
    return *y;
}
#include<stdio.h>
int swap(int *x,int *y,int *z);
int main()
{
    int n1,n2,n3;
    printf("Enter 3 numbers:");
    scanf("%d %d %d",&n1,&n2,&n3);
    printf("%d %d %d\n",n1,n2,n3);
    swap(&n1,&n2,&n3);
    printf("%d %d %d",n1,n2,n3);
}
int swap(int *x,int *y,int *z)
{
    int temp=*z;
    *z=*y;
    *y=*x;
    *x=temp;
}
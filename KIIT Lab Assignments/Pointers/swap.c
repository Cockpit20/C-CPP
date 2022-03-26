#include <stdio.h>
#include <stdlib.h>
void SWAP(int *,int *);
int main()
{
int n1, n2;
printf("Enter two integers:");
scanf("%d%d", &n1, &n2);
SWAP(&n1,&n2);
printf ("After swapping the integers are %d and %d",n1,n2);
}
void SWAP(int *x,int *y)
{
    int temp;
    temp=*x;
    *x=*y;
    *y=temp;
}
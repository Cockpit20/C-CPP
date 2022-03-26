#include <stdio.h>
#include <stdlib.h>
void SWAP(int *,int *,int *);
int main()
{
int n1, n2, n3;
printf("Enter three integers:");
scanf("%d%d%d", &n1, &n2, &n3);
SWAP(&n1,&n2,&n3);
printf ("After swapping the integers: %d %d %d",n1,n2,n3);
}
void SWAP(int *x,int *y,int *z)
{
    int temp;
    temp=*x;
    *x=*y;
    *y=*z;
    *z=temp;
}
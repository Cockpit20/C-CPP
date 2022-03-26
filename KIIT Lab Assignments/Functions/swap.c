#include<stdio.h>
void SWAP(int n1,int n2);
int main()
{
    int n1,n2;
    printf("Enter two numbers: ");
    scanf("%d %d",&n1,&n2);
    SWAP(n1,n2);
}
void SWAP(int n1,int n2)
{
    int temp;
    temp=n1;
    n1=n2;
    n2=temp;
    printf("Swapped numbers are %d and %d",n1,n2);
}
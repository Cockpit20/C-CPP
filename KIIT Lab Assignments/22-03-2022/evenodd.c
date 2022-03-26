#include<stdio.h>
int main()
{
    int n;
    printf("Enter a number:");
    scanf("%d",&n);
    printf("NUMBER IS ");
    if(n%2==0)
    printf("EVEN");
    if(n%2!=0)
    printf("ODD");
}
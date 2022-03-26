#include<stdio.h>
int main()
{
    int n;
    printf("Enter a number: ");
    scanf("%d",&n);
    printf("%d\n",n);
    printf("%d\n",n%1000);
    printf("%d\n",n%100);
    printf("%d",n%10);
}
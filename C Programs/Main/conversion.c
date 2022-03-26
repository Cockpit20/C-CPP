#include<stdio.h>
int main()
{
    int p;
    printf("Enter the distance in meter: ");
    scanf("%d",&p);
    int r=p%1000;
    int q=p/1000;
    printf("%d km and %d m",q,r);
}
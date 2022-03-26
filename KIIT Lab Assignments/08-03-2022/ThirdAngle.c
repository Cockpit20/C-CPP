#include<stdio.h>
int main()
{
    int a,b,c;
    printf("Enter any two angles of a triangle in degrees:");
    scanf("%d %d",&a,&b);
    c=180-(a+b);
    printf("The value of its third angle is %d degrees",c);
}
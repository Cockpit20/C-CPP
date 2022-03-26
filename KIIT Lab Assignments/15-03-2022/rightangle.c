#include<stdio.h>
int main()
{
    int a,b,c;
    printf("Enter three sides of a triangle:");
    scanf("%d %d %d",&a,&b,&c);
    int t=a*a+b*b==c*c||a*a+c*c==b*b||b*b+c*c==a*a;
    printf("Are the three sides sides of a right angled triangle?\n");
    printf("Display: 1 for Yes, 0 for No: %d",t);
}
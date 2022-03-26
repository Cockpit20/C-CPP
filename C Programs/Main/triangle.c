#include<math.h>
#include<stdio.h>
int main()
{
    int b,h;
    int s1,s2,s3;
    printf("Enter base and height: ");
    scanf("%d%d",&b,&h);
    printf("Enter three sides: ");
    scanf("%d%d%d",&s1,&s2,&s3);
    float a=0.5*b*h;
    float s=(s1+s2+s3)/2;
    float a2=sqrt(s*(s-s1)*(s-s2)*(s-s3));
    printf ("The area of the triangle with base %d and height %d is %.2f.\n",b,h,a);
    printf ("The area of the traingle with sides %d,%d and %d is %.2f.",s1,s2,s3,a2);
}
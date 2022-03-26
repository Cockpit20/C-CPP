#include<stdio.h>
int main()
{
    int r;
    printf("Enter a radius: ");
    scanf("%d",&r);
    float a=3.14*r*r;
    float p=2*3.14*r;
    printf("The area of the circle is %.2f\n.",a);
    printf("The perimeter of the circle is %.2f.",p);
}
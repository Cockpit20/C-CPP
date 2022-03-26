#include<stdio.h>
void SUM(int x, int y); 
int main()
{
int a, b, c;
printf("\nEnter two numbers :");
scanf("%d %d",&a, &b);
SUM(a,b); 
// printf("\nAddition of two numbers is %d.", c);
}
// int SUM(int x,int y)
// {
//     return (x+y);
// }
void SUM(int x, int y)
{
    int z=x+y;
    printf("\nAddition of two numbers is %d.", z);
}

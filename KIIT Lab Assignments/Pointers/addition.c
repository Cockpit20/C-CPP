#include <stdio.h>
#include <stdlib.h> //includes malloc
int main()
{
int a, b, *x, *y, sum;
x=(int*)malloc(sizeof(int));
y=(int*)malloc(sizeof(int));
printf("Enter two integers to add:");
// scanf("%d%d", &a, &b);
scanf("%d%d", x, y);
// x = &a;
// y = &b;
sum = *x + *y;
printf("Sum of %d and %d is %d",*x, *y, sum);
}
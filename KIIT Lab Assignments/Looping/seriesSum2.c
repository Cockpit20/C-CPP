#include <stdio.h>
#include <math.h>
int main()
{
    int n,e;
    printf("Enter the value of n:");
    scanf("%d", &n);
    printf("Enter the value of e:");
    scanf("%d", &e);
    int sum = 0;
    for (int i = 1; i <= n; i++)
    {
        sum = sum + pow(i,e);
    }
    printf("The sum of the series is %d", sum);
}
//1^e+2^e+3^e+4^e+..n^e
#include <stdio.h>
int main()
{
    int n;
    printf("Enter the value of n:");
    scanf("%d", &n);
    int sum = 0;
    for (int i = 1; i <= n; i++)
    {
        sum = sum + i;
    }
    printf("The sum of the series is %d", sum);
}
//1+2+3+4+..n
#include <stdio.h>
int main()
{
    int n;
    printf("Enter the value of n:");
    scanf("%d", &n);
    int sum = 0, s = 0;
    for (int i = 1; i <= n; i++)
    {
        sum = sum * 10 + i;
        s = s + sum;
    }
    printf("The sum of the series is %d", s);
}
//1+12+123+1234+..n
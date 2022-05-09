#include <stdio.h>
int factSum(int n);
int fact(int n);
int main()
{
    int n;
    printf("Enter a number:");
    scanf("%d", &n);
    printf("Sum of factorials of all digits of %d = %d", n, factSum(n));
}
int factSum(int n)
{
    int b = n;
    int digit, s = 0;
    while (b > 0)
    {
        digit = b % 10;
        s = s + fact(digit);
        b = b / 10;
    }
    return s;
}
int fact(int n)
{
    if (n == 0 || n == 1)
        return 1;
    return n * fact(n - 1);
}
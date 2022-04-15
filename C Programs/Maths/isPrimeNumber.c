#include <stdio.h>
#include <math.h>
int isPrimeNumber(int n);
int main()
{
    int n = 729;
    printf("%d", isPrimeNumber(n));
}
int isPrimeNumber(int n)
{
    if (n < 2)
        return 0;
    for (int i = 2; i <= sqrt(n); i++)
    {
        if (n % i == 0)
            return 0;
    }
    return 1;
}
#include <stdio.h>
#include <math.h>
void sieve(int n, int arr[]);
int main()
{
    int n = 40;
    int arr[n + 1];
    for (int i = 0; i <= n; i++)
    {
        arr[i] = 1;
    }
    sieve(n, arr);
}
void sieve(int n, int arr[])
{
    for (int i = 2; i <= sqrt(n); i++)
    {
        if (arr[i] == 1)
        {
            for (int j = 2 * i; j <= n; j += i)
            {
                arr[j] = 0;
            }
        }
    }
    for (int i = 2; i <= n; i++)
    {
        if (arr[i] == 1)
            printf("%d ", i);
    }
}
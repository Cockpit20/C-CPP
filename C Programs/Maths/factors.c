#include <stdio.h>
#include <math.h>

void factors(int n);
void factors2(int n);

int main()
{
    int n = 36;
    factors(n);
    printf("\n");
    factors2(n);
}

//O(sqrt(n))
void factors(int n)
{
    for (int i = 1; i <= sqrt(n); i++)
    {
        if (n % i == 0)
        {
            if (n / i == i)
                printf("%d ", i);
            else
                printf("%d %d ", i, n / i);
        }
    }
}

//O(sqrt(n))
void factors2(int n)
{
    int arr[n];
    int c = 0;
    for (int i = 1; i <= sqrt(n); i++)
    {
        if (n % i == 0)
        {
            if (n / i == i)
                printf("%d ", i);
            else
            {
                printf("%d ", i);
                arr[c] = n / i;
                c++;
            }
        }
    }
    for (int i = c - 1; i >= 0; i--)
    {
        printf("%d ", arr[i]);
    }
}
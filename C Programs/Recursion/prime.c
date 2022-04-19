#include <stdio.h>
#include <math.h>
int isPrime(int n);
int main()
{
    int n;
    printf("Enter a number:");
    scanf("%d", &n);
    if (isPrime(n))
        printf("Number is prime");
    else
        printf("Number is not prime");
}
int isPrime(int n)
{
    // Write your code here
    // Time Complexity : O(sqrt(N))
    if (n <= 1)
        return 0;
    for (int i = 2; i <= sqrt(n); i++)
    {
        if (n % i == 0)
            return 0;
    }
    return 1;
}
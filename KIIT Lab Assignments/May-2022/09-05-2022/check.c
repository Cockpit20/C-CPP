#include <stdio.h>
int checkPrime(int n);
int checkPerfect(int n);
int checkArmstrong(int n);
int main()
{
    int press, n, check;
    while (1)
    {
        printf("Press 1 for Prime no checking\n");
        printf("Press 2 for Perfect no checking\n");
        printf("Press 3 for Armstrong no checking\n");
        printf("Press 4 to Exit\n");
        scanf("%d", &press);

        if (press == 1)
        {
            printf("Enter a number:");
            scanf("%d", &n);
            if (checkPrime(n))
            {
                printf("%d is prime\n", n);
            }
            else
            {
                printf("%d is not prime\n", n);
            }
        }
        else if (press == 2)
        {
            printf("Enter a number:");
            scanf("%d", &n);
            if (checkPerfect(n))
            {
                printf("%d is perfect\n", n);
            }
            else
            {
                printf("%d is not perfect\n", n);
            }
        }
        else if (press == 3)
        {
            printf("Enter a number:");
            scanf("%d", &n);
            if (checkArmstrong(n))
            {
                printf("%d is armstrong\n", n);
            }
            else
            {
                printf("%d is not armstrong\n", n);
            }
        }
        else if (press == 4)
        {
            break;
        }
        else
        {
            printf("Invalid input!\n");
        }
    }
}
int checkPrime(int n)
{
    int c = 0;
    for (int i = 2; i < n; i++)
    {
        if (n % i == 0)
            return 0;
    }
    return 1;
}
int checkPerfect(int n)
{
    int s = 0;
    for (int i = 1; i < n; i++)
    {
        if (n % i == 0)
            s = s + i;
    }
    if (s == n)
        return 1;
    else
        return 0;
}
int checkArmstrong(int n)
{
    int b = n;
    int digit, s = 0;
    while (b > 0)
    {
        digit = b % 10;
        s = s + digit * digit * digit;
        b = b / 10;
    }
    if (s == n)
        return 1;
    else
        return 0;
}
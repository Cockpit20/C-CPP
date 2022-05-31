#include <stdio.h>

int isValid(int d1, int m1, int y1)
{
    if (m1 == 1 || m1 == 3 || m1 == 5 || m1 == 7 || m1 == 8 || m1 == 10 || m1 == 12)
    {
        if (d1 >= 1 && d1 <= 31)
        {
            return 1;
        }
    }
    if (m1 == 4 || m1 == 6 || m1 == 9 || m1 == 11)
    {
        if (d1 >= 1 && d1 <= 30)
        {
            return 1;
        }
    }
    if (m1 == 2)
    {
        if (d1 >= 1 && d1 <= 28)
        {
            return 1;
        }
    }
    return 0;
}

int cmpDate(int d1, int d2, int m1, int m2, int y1, int y2)
{
    if (d1 == d2 && m1 == m2 && y1 == y2)
        return 0;
    else if (y1 > y2 || (y1 == y2 && m1 > m2) || (y1 == y2 && m1 == m2 && d1 > d2))
        return 1;
    else
        return -1;
}

int main()
{

    int d1, d2, m1, m2, y1, y2;
    printf("Enter first date: ");
    scanf("%d %d %d", &d1, &m1, &y1);
    printf("Enter second date: ");
    scanf("%d %d %d", &d2, &m2, &y2);

    if (isValid(d1, m1, y1) == 1 && isValid(d2, m2, y2) == 1)
    {
        if (cmpDate(d1, d2, m1, m2, y1, y2) == 0)
            printf("Both dates are same");
        else if (cmpDate(d1, d2, m1, m2, y1, y2) == 1)
            printf("First Date is greater than second date");
        else if (cmpDate(d1, d2, m1, m2, y1, y2) == -1)
            printf("Second Date is greater than first date");
    }
    else
    {
        printf("Invalid date!");
    }
}
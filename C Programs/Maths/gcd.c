#include <stdio.h>
int gcd(int a, int b);
int main()
{
    int n1 = 105;
    int n2 = 224;
    printf("%d\n", gcd(n1, n2));
    int lcm = (n1 * n2) / gcd(n1, n2);
    printf("%d", lcm);
}
int gcd(int a, int b)
{
    if (a % b == 0)
        return b;
    return gcd(b, a % b);
}
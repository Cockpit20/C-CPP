#include <stdio.h>
int main()
{
    int n;
    printf("Enter the value of n:");
    scanf("%d", &n);
    int arr[n];
    for (int c = 0; c <= n;)
    {
        for (int i=10;c <= n;i++)
        {
            int d = 0;
            for (int j = 1; j <= i; j++)
            {
                if (i % j == 0)
                    d++;
            }
            if (d == 2)
            {
                arr[c]=i;
                c++;
            }
        }
    }
    for (int i = 0; i < n; i++)
    {
        printf("%d ",arr[i]);
    }
}

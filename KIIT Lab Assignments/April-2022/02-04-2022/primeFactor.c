#include<stdio.h>
int find_prime_factor(int n);
int main()
{
    int n;
    printf("Enter a positive integer:");
    scanf("%d",&n);
    find_prime_factor(n);
}
int find_prime_factor(int n)
{
    for(int i=1;i<=n;i++)
    {
        int c=0;
        if(n%i==0)
        {
            for(int j=1;j<=i;j++)
            {
                if(i%j==0)
                c=c+1;
            }
        }
        if (c==2)
        printf("%d ",i);
    }
}
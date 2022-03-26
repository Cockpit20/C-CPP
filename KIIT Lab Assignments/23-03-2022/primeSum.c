#include<stdio.h>
int main()
{
    int n,count=0,sum=0;
    for(int i=1;i<=10;i++)
        {
            printf("Enter number %d:",i);
            scanf("%d",&n);
            int c=0;
            for(int j=1;j<=n;j++)
            {
                if (n%j==0)
                c=c+1;
            }
            if (c==2)
            {
                count++;
                sum=sum+n;
            }
        }
    printf("The number of prime numbers is %d and their sum is %d",count,sum);
}
#include<stdio.h>
int main()
{
    int n;int c=0,sum=0;
    for(int i=1;i<=10;i++)
        {
            printf("Enter number %d:",i);
            scanf("%d",&n);
            if(n%2!=0)
            {
                c++;
                sum=sum+n;
            }
        }
    printf("The number of odd numbers is %d and their sum is %d",c,sum);
}
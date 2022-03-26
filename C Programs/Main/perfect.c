#include<stdio.h>
int main()
{
    for(int j=1;j<=10000;j++)
    {
        int s=0;
        for (int i=1;i<(j-1);i++)
        {
            if (j%i==0)
            s=s+i;
        }
        if (j==s)
        printf("%d is a perfect number.\n",j);
    }
}
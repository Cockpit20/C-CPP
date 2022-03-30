#include<stdio.h>
int main()
{
    printf("Prime Nos. in the range 2 to 100 are: \n");
    for (int i=2;i<=100;i++)
    {
        int c=0;
        for(int j=1;j<=i;j++)
        {
            if (i%j==0)
            c=c+1;
        }
        if (c==2)
        printf("%d ",i);
    }
}
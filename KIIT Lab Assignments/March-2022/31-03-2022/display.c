#include<stdio.h>
int main()
{
    int n;
    printf("How many numbers should be printed in a line?");
    scanf("%d",&n);
    for (int i=1;i<=200;)
    {
        for (int j=1;j<=n;j++)
        {
            if(i<=200)
            {
                printf("%d ",i);
                i++;
            }
        }
        printf("\n");
    }
}
#include<stdio.h>
int main()
{
    int n; int index;
    printf("Enter the number of rows:");
    scanf("%d",&n);
    for (int i=1;i<=n;i++)
    {
        if (i%2==0)
        index=1;
        else
        index=0;
        for (int j=1;j<=i;j++)
        {
            printf("%d ",index);
            if (index==1)
            index=0;
            else 
            index=1;
        }
        printf("\n");
    }
}
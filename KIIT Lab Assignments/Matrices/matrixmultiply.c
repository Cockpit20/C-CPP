#include<stdio.h>
int main()
{
    int a[3][3],b[3][3],s[3][3];
    printf("Enter value of matrix a:");
    for (int i=1;i<=3;i++)
    {
        for (int j=1;j<=3;j++)
        {
            scanf("%d",&a[i][j]);
        }
    }
    printf("Enter value of matrix b:");
    for (int i=1;i<=3;i++)
    {
        for (int j=1;j<=3;j++)
        {
            scanf("%d",&b[i][j]);
        }
    }
    printf("Value of matrix a:\n");;
    for (int i=1;i<=3;i++)
    {
        for (int j=1;j<=3;j++)
        {
            printf("%d\t",a[i][j]);
        }
        printf("\n");
    }
    printf("Value of matrix b:\n");;
    for (int i=1;i<=3;i++)
    {
        for (int j=1;j<=3;j++)
        {
            printf("%d\t",b[i][j]);
        }
        printf("\n");
    }
    for (int i=1;i<=3;i++)
    {
        for (int j=1;j<=3;j++)
        {
            s[i][j]=0;
            for (int k=1;k<=3;k++)
            {
                s[i][j]=s[i][j]+a[i][k]*b[k][j];
            }
        }
    }
    printf("Value of added matrices a and b:\n");;
    for (int i=1;i<=3;i++)
    {
        for (int j=1;j<=3;j++)
        {
            printf("%d\t",s[i][j]);
        }
        printf("\n");
    }
}
#include<stdio.h>
int main()
{
    int a[2][3],b[2][3],s[2][3];
    printf("Enter value of matrix a:");
    for (int i=1;i<=2;i++)
    {
        for (int j=1;j<=3;j++)
        {
            scanf("%d",&a[i][j]);
        }
    }
    printf("Enter value of matrix b:");
    for (int i=1;i<=2;i++)
    {
        for (int j=1;j<=3;j++)
        {
            scanf("%d",&b[i][j]);
        }
    }
    printf("Value of matrix a:\n");;
    for (int i=1;i<=2;i++)
    {
        for (int j=1;j<=3;j++)
        {
            printf("%d\t",a[i][j]);
        }
        printf("\n");
    }
    printf("Value of matrix b:\n");;
    for (int i=1;i<=2;i++)
    {
        for (int j=1;j<=3;j++)
        {
            printf("%d\t",b[i][j]);
        }
        printf("\n");
    }
    for (int i=1;i<=2;i++)
    {
        for (int j=1;j<=3;j++)
        {
            s[i][j]=a[i][j]+b[i][j];
        }
    }
    printf("Value of added matrices a and b:\n");;
    for (int i=1;i<=2;i++)
    {
        for (int j=1;j<=3;j++)
        {
            printf("%d\t",s[i][j]);
        }
        printf("\n");
    }
}
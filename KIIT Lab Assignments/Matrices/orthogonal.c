#include <stdio.h>
int main()
{
int a[10][10],i,j,n,sum=0;
int t[10][10];
int s[10][10];
int c1=0,c2=0;
printf("Enter the order of the square matrix A:");
scanf("%d",&n);
printf("Enter the values of the square matrix A\n");
for(i=0;i<n;i++)
for(j=0;j<n;j++)
scanf("%d",&a[i][j]);
// printf("\nTranspose of the square matrix A:\n");
for(i=0;i<n;i++)
for(j=0;j<n;j++)
t[i][j]=a[j][i];
for (int i=0;i<n;i++)
    {
        for (int j=0;j<n;j++)
        {
            s[i][j]=0;
            for (int k=0;k<n;k++)
            {
                s[i][j]=s[i][j]+a[i][k]*t[k][j];
            }
        }
    }
for (int i=0;i<n;i++)
    {
        for (int j=0;j<n;j++)
        {
            if (i==j)
            {
                if (s[i][j]==1)
                c1=c1+1;
            }
            else
            {
                if (s[i][j]==0)
                c2=c2+1;
            }
        }
    }
    if (c1==n && c2==n*n-n)
    printf("Matrix A is orthogonal");
    else
    printf("Matrix A is not orthogonal");
}

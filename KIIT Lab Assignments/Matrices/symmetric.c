#include <stdio.h>
int main()
{
int a[10][10],i,j,n,sum=0;
int c=0;
int t[10][10];
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
for(i=0;i<n;i++)
    {
        for(j=0;j<n;j++)
        {
           if(a[i][j]==a[j][i])
           c=c+1;
        }
    }
if (c==n*n)
printf("Matrix A is symmetric.");
else
printf("Matrix A is not symmetric.");        
}

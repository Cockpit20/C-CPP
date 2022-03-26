#include <stdio.h>
int main()
{
int a[10][10],i,j,n,sum=0;
printf("Enter the order of the square matrix A:");
scanf("%d",&n);
printf("Enter the values of the square matrix A\n");
for(i=0;i<n;i++)
for(j=0;j<n;j++)
scanf("%d",&a[i][j]);
printf("\nTranspose of the square matrix A:\n");
for(i=0;i<n;i++)
    {
        for(j=0;j<n;j++)
        {
            printf("%d ",a[j][i]);
        }
        printf("\n");
    }
}

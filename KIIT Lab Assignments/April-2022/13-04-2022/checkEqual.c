#include<stdio.h>
int main()
{
    int m,n,p,q;
    printf("Enter the value of m,n,p,q:");
    scanf("%d %d %d %d ",&m,&n,&p,&q);
    int matrixA[m][n];
    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < n; j++)
        {
            printf("Enter %d,%d element of Matrix A:",i,j);
            scanf("%d",&matrixA[i][j]);
        }
        
    }
    printf("Matrix A:\n");
    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < n; j++)
        {
            printf("%d\t",matrixA[i][j]);
        }
        printf("\n");        
    }
    int matrixB[p][q];
    for (int i = 0; i < p; i++)
    {
        for (int j = 0; j < q; j++)
        {
            printf("Enter %d,%d element of Matrix B:",i,j);
            scanf("%d",&matrixB[i][j]);
        }
        
    }
    printf("Matrix B:\n");
    for (int i = 0; i < p; i++)
    {
        for (int j = 0; j < q; j++)
        {
            printf("%d\t",matrixB[i][j]);
        }
        printf("\n");        
    }
    int c=0;
    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < n; j++)
        {
            if(matrixA[i][j]==matrixB[i][j])
            c++;
        }       
    }
    if(c==(m*n) && (m*n)==(p*q)){
        printf("The matrices are equal.");
    }else{
        printf("The matrices are not equal");
    }
}
#include<stdio.h>
int main()
{
    int matrix[5][5];
    for (int i = 0; i < 5; i++)
    {
        for (int j = 0; j < 5; j++)
        {
            printf("Enter %d,%d element:",i,j);
            scanf("%d",&matrix[i][j]);
        }
        
    }
    printf("Original Matrix:\n");
    for (int i = 0; i < 5; i++)
    {
        for (int j = 0; j < 5; j++)
        {
            printf("%d\t",matrix[i][j]);
        }
        printf("\n");        
    }
    int max=matrix[0][0];
    for (int i = 0; i < 5; i++)
    {
        for (int j = 0; j < 5; j++)
        {
           if(matrix[i][j]>max)
           max=matrix[i][j];
        }       
    }
    printf("The largest element in the matrix is %d",max);
    
}
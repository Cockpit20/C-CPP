#include<stdio.h>
int main()
{
    int matrix[4][5];
    for (int i = 0; i < 4; i++)
    {
        for (int j = 0; j < 5; j++)
        {
            printf("Enter %d,%d element:",i,j);
            scanf("%d",&matrix[i][j]);
        }
    }
    int se=0;
    int so=0;
    for (int i = 0; i < 4; i++)
    {
        for (int j = 0; j < 5; j++)
        {
            if(matrix[i][j]%2==0)
            se=se+matrix[i][j];
            else
            so=so+matrix[i][j];
        }       
    }
    printf("Sum of odd numbers in the matrix is %d",so);
    printf("\nSum of even numbers in the matrix is %d",se);
}
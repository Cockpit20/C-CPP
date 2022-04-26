#include <stdio.h>
int main()
{
    int matrix[100][100];
    int m, n;
    printf("Enter the value of m and n:");
    scanf("%d %d", &m, &n);
    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < n; j++)
        {
            printf("Enter element %d,%d :", i,j);
            scanf("%d", *(matrix + i)+j);
        }
    }

    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < n; j++)
        {
            printf("%d ",*(*(matrix+i)+j));
        }
        printf("\n");
    }
}
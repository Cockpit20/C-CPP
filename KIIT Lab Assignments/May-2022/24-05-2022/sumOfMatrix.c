#include <stdio.h>

int main()
{
    FILE *fp;
    int a[10][10], sum = 0;
    fp = fopen("matrix.in", "r");
    for (int i = 0; i < 10; i++)
    {
        for (int j = 0; j < 10; j++)
        {
            fscanf(fp, "%d", &a[i][j]);
            sum += a[i][j];
        }
    }
    printf("Sum= %d \n", sum);
    for (int i = 9; i >= 0; i--)
    {
        for (int j = 9; j >= 0; j--)
        {
            printf("%d ",a[i][j]);
        }
        printf("\n");
        
    }
    fclose(fp);
}
#include <stdio.h>
int main()
{
    int A[] = {1, 2, 3, 4, 5};
    int B[] = {2, 3, 5, 7, 11};
    int AUB[5];
    int c = 0;
    for (int i = 0; i < 5; i++)
    {
        for (int j = 0; j < 5; j++)
        {
            if (A[j] == B[i])
            {
                AUB[c] = A[j];
                c++;
            }
        }
    }
    for (int i = 0; i < c; i++)
    {
        printf("%d ", AUB[i]);
    }
}
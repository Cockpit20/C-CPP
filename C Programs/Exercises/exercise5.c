#include <stdio.h>
void arrayRev(int *arr);
int main()
{
    int arr[] = {2, 3, 5, 7, 9};
    for (int i = 0; i < 5; i++)
        printf("%d ", arr[i]);
    arrayRev(arr);
    printf("\n");
    for (int i = 0; i < 5; i++)
        printf("%d ", arr[i]);
}
void arrayRev(int *arr)
{
    for (int i = 0; i < 5 / 2; i++)
    {
        int temp = *(arr + i);
        *(arr + i) = *(arr + 5 - i - 1);
        *(arr + 5 - i - 1) = temp;
    }
}
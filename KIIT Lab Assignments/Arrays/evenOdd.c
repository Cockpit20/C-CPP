#include <stdio.h>
int main()
{
    int arr[] = {18, 32, 27, 10, 21, 11};
    int arr2[6];
    int countOdd = 0;
    for (int i = 0; i < 6; i++)
    {
        if (arr[i] % 2 != 0)
        {
            arr2[countOdd] = arr[i];
            countOdd++;
        }
    }
    int countEven = 0;
    for (int i = 0; i < 6; i++)
    {
        if (arr[i] % 2 == 0)
        {
            arr2[countOdd + countEven] = arr[i];
            countEven++;
        }
    }
    for (int i = 0; i < 6; i++)
    {
        printf("%d ", arr2[i]);
    }
}
#include <stdio.h>
int main()
{
    int arr[100], freq[100];
    int size;
    printf("Enter the size of the array:");
    scanf("%d", &size);
    for (int i = 0; i < size; i++)
    {
        printf("Enter element %d:", i + 1);
        scanf("%d", &arr[i]);
        freq[i] = -1;
    }
    for (int i = 0; i < size; i++)
    {
        int count = 1;
        for (int j = i+1; j < size; j++)
        {
            if (arr[i] == arr[j])
            {
                count++;
                freq[j] = 0;
            }
        }
        if (freq[i] != 0)
            freq[i] = count;
    }
    printf("Frequency of all elements in an array:\n");
    for (int i = 0; i < size; i++)
    {
        if(freq[i]!=0)
        printf("%d appears %d time(s)\n",arr[i],freq[i]);
    }
    
}
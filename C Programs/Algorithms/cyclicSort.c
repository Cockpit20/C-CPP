#include <stdio.h>
void cyclicSort(int arr[]);
void swap(int arr[], int a, int b);
int main()
{
    int arr[] = {3,1,5,2,4,7,9,10,8,6};
    for (int i = 0; i <= 9; i++)
    {
        printf("%d ", arr[i]);
    }
    printf("\n");
    cyclicSort(arr);
    for (int i = 0; i <= 9; i++)
    {
        printf("%d ", arr[i]);
    }
}
void cyclicSort(int arr[])
{
    int i=0;
    while(i<=8)
    {
        int correctIndex=arr[i]-1;
        if(arr[i]!=arr[correctIndex])
        swap(arr,i,correctIndex);
        else
        i++;
    }

}
void swap(int arr[], int a, int b)
{
    int temp = arr[a];
    arr[a] = arr[b];
    arr[b] = temp;
}
#include<stdio.h>
int func1(int arr[]);
int func2(int *arr);
int main()
{
    int arr[]={21,42,63};
    int av=func1(arr);
    printf("Avg=%d\n",av);
    int av2=func2(arr);
    printf("Avg=%d\n",av2);
}
//Declaring array as a formal parameter
int func1(int arr[])
{
    int s=0;
    for (int i = 0; i < 3; i++)
    {
        s=s+arr[i];
    }
    return s/3;
}
//Passing address to the function
int func2(int *arr)
{
    int s=0;
    for (int i = 0; i < 3; i++)
    {
        s=s+*(arr+i);
    }
    return s/3;
}
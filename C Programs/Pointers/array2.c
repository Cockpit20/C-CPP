#include<stdio.h>
int array (int *arr);
int rev_array (int *arr);
int max (int *arr);
int sum (int *arr);
int sort (int *arr);
int main()
{
    int arr[]={5,7,2,9,8};

    array(arr);
    
    rev_array(arr);
    
    printf("\nThe largest element in the array is %d",max(arr));
    
    printf("\nThe sum of elements in the array is %d",sum(arr));
}
//Print all elements in an array
int array (int *arr)
{
    for (int i = 0; i < 5; i++)
    {
        printf("%d ",*(arr+i));
    }
}
//Print all elements in an array in reverse order 
int rev_array (int *arr)
{
    for (int i = 5-1; i >= 0; i--)
    {
        printf("%d ",*(arr+i));
    }
}
//Max element in an array
int max (int *arr)
{
    int max=*arr;
    for (int i = 0; i < 5; i++)
    {
        if(*(arr+i)>max)
        max=*(arr+i);
    }
    return max;
}
//Sum of elements in an array
int sum (int *arr)
{
    int sum=0;
    for (int i = 0; i < 5; i++)
    {
        sum=sum+*(arr+i);
    }
    return sum;
}
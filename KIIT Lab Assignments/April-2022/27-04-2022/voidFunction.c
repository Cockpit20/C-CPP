#include<stdio.h>
void function(int *arr,int *min,int *max,int *count);
int main()
{
    int arr[20];
    for (int i = 0; i < 20; i++)
    {
        printf("Enter number %d:",i+1);
        scanf("%d",&arr[i]);
    }
    int min=arr[0];
    int max=arr[0];
    int c=0;
    function(arr,&min,&max,&c);
    printf("The largest is %d\n",max);
    printf("The smallest is %d\n",min);
    printf("The number of odd numbers is %d",c);

}
void function(int *arr,int *min,int *max,int *count)
{
    for (int i = 0; i < 20; i++)
    {
        if(*(arr+i)>*max)
        *max=*(arr+i);
        if(*(arr+i)<*min)
        *min=*(arr+i);
        if(*(arr+i)%2!=0)
        *count=*count+1;
    }
    return;
}
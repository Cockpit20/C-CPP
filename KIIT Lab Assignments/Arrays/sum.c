#include<stdio.h>
int sum();
int main()
{
    int s=sum();
    printf("The sum of elements in the array is %d\n",s);
}
int sum()
{
    int n[5];
    for (int i=0;i<5;i++)
    {
        printf("Enter number %d:",i+1);
        scanf("%d",&n[i]);
    }
    int sum=0;
    for (int i=0;i<5;i++)
    {
        sum=sum+n[i];
    }
    return sum;
}
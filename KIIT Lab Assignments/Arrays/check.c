#include<stdio.h>
int check();
int main()
{
    if(check())
    printf("Both arrays are same");
    else
    printf("Arrays are not same");
}
int check()
{
    int arr1[5];
    for (int i=0;i<5;i++)
    {
        printf("Enter number %d of 1st array:",i+1);
        scanf("%d",&arr1[i]);
    }
    int arr2[5];
    for (int i=0;i<5;i++)
    {
        printf("Enter number %d of 2nd array:",i+1);
        scanf("%d",&arr2[i]);
    }
    int c=0;
    for (int i=0;i<5;i++)
    {
        if(arr1[i]==arr2[i])
        c++;
    }
    return c==5;
}
#include<stdio.h>
int main()
{
    int temp; int s; int c=0;
    printf("Enter the number of elements: \n");
    scanf("%d",&s);
    int n[s];
    printf("Enter the numbers one by one : \n");
    for (int i=0;i<s;i++)
    {
        scanf("%d",&n[i]);
    }
    int n2[s];
    printf("The new array is: \n");
    for (int i=0;i<s;i++)
    {
        n2[i]=n[i];
    }
    for (int i=0;i<s;i++)
    {
        printf("n2[%d]=%d\n",i,n2[i]);
    }
}
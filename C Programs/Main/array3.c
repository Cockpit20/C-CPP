#include<stdio.h>
int main()
{
    int temp; int s;
    printf("Enter the number of elements: \n");
    scanf("%d",&s);
    int n[s];
    printf("Enter the numbers one by one : \n");
    for (int i=0;i<s;i++)
    {
        scanf("%d",&n[i]);
    }
    temp=n[2];
    n[2]=n[3];
    n[3]=temp;
    printf("The new array is:\n");
    for (int i=0;i<s;i++)
    {
        printf("%d\n",n[i]);
    }
}
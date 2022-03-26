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
    for (int i=0;i<s;i++)
    {
        for (int j=i+1;j<s;j++)
        {
        if (n[i]>n[j])
            {
              temp=n[i];
              n[i]=n[j];
              n[j]=temp;
            }
        }
    }
    printf("The Numbers In Ascending Order Is: \n");
    for (int i=0;i<s;i++)
    printf("%d ",n[i]); 
}
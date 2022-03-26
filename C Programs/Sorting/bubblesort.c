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
    for (int i=1;i<s;i++)
    {
        for (int j=0;j<s-i;j++)
        {
        if (n[j]<n[j+1])
            {
              temp=n[j];
              n[j]=n[j+1];
              n[j+1]=temp;
            }
        }
    }
    printf("The Numbers In Descending Order Is: \n");
    for (int i=0;i<s;i++)
    printf("%d ",n[i]); 
}
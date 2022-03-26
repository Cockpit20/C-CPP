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
    printf("%d \n",n[i]); 
    printf("The second largest number is= %d\n",n[1]);
    printf("The second smallest number is= %d\n",n[s-2]);
    int avg=(n[1]+n[s-2])/2;
    printf("The average of %d and %d is =%d",n[1],n[s-2],avg);
    for (int i=1;i<s;i++)
    {
        if (avg==n[i])
        c=c+1;
    }
    if (c==1)
    printf(",which is in the array.");
    else
    printf(",which is not in the array.");
}
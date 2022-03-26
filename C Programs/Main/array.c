#include<stdio.h>
int main()
{
    int s;int sum=0;int ln=0;int temp;
    int location;
    printf ("Enter the number of elements: ");
    scanf("%d",&s);
    int n[s];
    printf("Enter the elements: ");
    for (int i=0;i<s;i++)
    {
        scanf("%d",&n[i]);
        sum=sum+n[i];
        printf("%d ",n[i]);
        if (n[i]%2==0&&n[i]>ln)
        {
            ln=n[i];
            location=i+1;
        }
    }
    printf("\nThe numbers in reverse order is: ");
    for (int i=s-1;i>=0;i--)
    {
          printf("%d ",n[i]);
    }
    printf("\nSum of the elements of the array is %d.\n",sum);
    printf("The Largest Even Number is %d and its location is %d.\n",ln,location);
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
    printf("\nThe three digit even numbers are: \n");
     for (int i=0;i<s;i++)
     {
         if(n[i]%2==0&&n[i]/100>0&&n[i]/100<10)
         printf("%d ",n[i]);
     }
}
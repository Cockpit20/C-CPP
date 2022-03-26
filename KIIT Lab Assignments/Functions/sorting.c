#include<stdio.h>
void SORTING(int n);
int main()
{
int n;
printf("Enter size of array :");
scanf("%d",&n);
SORTING(n);
}
void SORTING(int n)
{
    int a[n];
    int temp;
    printf("Enter the integers:");
    for (int i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    for (int i=0;i<n;i++)
    {
        for (int j=i+1;j<n;j++)
        {
            if(a[i]>a[j])
            {
                temp=a[i];
                a[i]=a[j];
                a[j]=temp;
            }
        }
    }
    printf("The elements of the array in ascending order is:\n");
    for (int i=0;i<n;i++)
    {
        printf("%d ",a[i]);
    }
}

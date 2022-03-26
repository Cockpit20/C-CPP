#include<stdio.h>
int SUM_ARRAY(int n);
int main()
{
int n;
printf("Enter size of array :");
scanf("%d",&n);
int sa=SUM_ARRAY(n);
printf("Sum of integers stored in the array is %d.",sa);
}
int SUM_ARRAY(int n)
{
    int a[n];int s=0;
    printf("Enter the integers:");
    for (int i=1;i<=n;i++)
    {
        scanf("%d",&a[i]);
        s=s+a[i];
    }
    return s;
}

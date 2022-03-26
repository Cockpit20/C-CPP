#include <stdio.h>
#include <stdlib.h>
int main()
{
int *a, i,n,temp;
printf("\nPointer : Store and retrieve elements from an array :\n");
printf("----------------------------------------------------\n");
printf("Enter the number of elements to store in the array :");
scanf("%d",&n);
a=(int*)malloc(n*sizeof(int));
printf("Enter %d number of elements:", n);
for(i=0;i<n;i++)
{
scanf("%d",a+i);
}
for(i=0;i<n;i++)
{
    for (int j=i+1;j<n;j++)
    {
        if (*(a+i)>*(a+j))
        {
            temp=*(a+i);
            *(a+i)=*(a+j);
            *(a+j)=temp;
        }
    }
}
printf("The elements you entered in ascending order are :");
for(i=0;i<n;i++)
{
printf("%d ", *(a+i));
}
}
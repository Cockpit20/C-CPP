#include <stdio.h>
#include <stdlib.h>
int main()
{
int *a, i,n;
int max=0;
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
if (*(a+i)>max)
max=*(a+i);
}
printf("The largest element is %d",max);
}
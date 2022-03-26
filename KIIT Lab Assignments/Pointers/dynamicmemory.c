#include <stdio.h>
#include <stdlib.h>
int main()
{
int *a, i,n;
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
printf("The elements you entered are :");
for(i=0;i<n;i++)
{
printf("%d ", *(a+i));
}
}
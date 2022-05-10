#include<stdio.h>
int length(char arr[]);
int main()
{
    char arr[]="Saptadip";
    
    int len=length(arr);
    printf("Length of %s is %d",arr,len);
}
int length(char arr[])
{
    int i=0;
    while(arr[i]!='\0')
    {
        ++i;
    }
    return i;
}
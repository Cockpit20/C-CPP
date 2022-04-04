#include<stdio.h>
int main()
{
    //Pointer Arithmetic
    char a='a';
    char *ptra=&a;
    printf("%d\n",ptra);
    printf("%d\n",++ptra);
    printf("%d\n",ptra-2);
    //Array Pointer
    printf("arr[i]\taddress\n");
    int arr[]={32,46,89,25,37};
    for (int i = 0; i < 5; i++)
    {
        printf("%d\t",*(arr+i));
        printf("%d \n",arr+i);
    }
    
}

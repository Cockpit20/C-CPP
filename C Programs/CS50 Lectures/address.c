#include<stdio.h>
int main()
{
    //pointer gives the address where n is stored in the memory.
    char *s="HI!";
    printf("%c\n", *s);
    printf("%c\n", *(s+1));
    printf("%c\n", *(s+2));
    //using pointer in array of numbers.
    int n[]={4,6,8,2,7,5,0};
    printf("%i\n",*n);
    printf("%i\n",*(n+1));
    printf("%i\n",*(n+2));
    printf("%i\n",*(n+3));
    printf("%i\n",*(n+4));

}
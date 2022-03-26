#include<stdio.h>
#include<string.h>
int main()
{
    char *s="Hi!"; 
    char *t="Hi!";

    printf("%p\n", s);
    printf("%p\n", t);
   
   //strcmp compares two strings
   //syntax if(strcmp(s,t)==0)
    if (strcmp(s, t)==0)
        printf("Same");
    else
        printf("Different");
}
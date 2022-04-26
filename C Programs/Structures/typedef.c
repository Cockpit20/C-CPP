#include<stdio.h>

typedef struct student 
{
    int id;
    float cgpa;
    char fav_char;
    char name[50];
}std;


int main()
{
    typedef int* intPointer;
    intPointer a,b;
    int c=89;
    a=&c;
    b=&c;

    // std s1,s2;
    // s1.id=34;
    // s2.id=89;

    // printf("%d",s1.id);
    // printf("\n%d",s2.id);

    // typedef unsigned long ul;
    // ul l1,l2,l3;

    // typedef int integer;
    // integer a=4;

    // printf("Value of a is %d",a);
}
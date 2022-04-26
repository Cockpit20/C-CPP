#include<stdio.h>
#include<string.h>
typedef union student
{
    int id;
    float marks;
    char fav_char;
    char name[50];
} std;

std s1,s2;

int main()
{
    s1.id=42;
    s2.id=69;
    printf("%d",s1.id);
    printf("\n%d",s1.id);
}

#include<stdio.h>

struct book
{
    char name[20];
    float price;
    int pages;
};

struct book b,k[5];
struct book *p;

int main()
{
    // POINTER VARIABLE:
    p->name[5]="S";
    p->price=20.50;
    p->pages=100;

    b.price=20.50;
    b.pages=100;

    k[0].pages=200;

    scanf("%s",k[1].name);
    b.name[5]='S';
}

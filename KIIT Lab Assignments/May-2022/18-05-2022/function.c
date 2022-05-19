#include<stdio.h>
struct book
{
    char name[25];
    char author[25];
    int cost;
};

void display(char *s,char *t,int c)
{
    printf("%s %s %d \n",s,t,c);
}

void displayEntire(struct book b)
{
    printf("%s %s %d",b.name,b.author,b.cost);
}

int main()
{
    struct book p={"Let us C","YPK",100};
    display(p.name,p.author,p.cost);
    displayEntire(p);
}

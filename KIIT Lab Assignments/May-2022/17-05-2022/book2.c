#include<stdio.h>

struct book2
{
    char name[20];
    float price;
    int pages;
};

struct book2 arr[10];

int main()
{
    printf("Enter names,prices & no. of pages of 10 books:\n");
    for (int i = 0; i < 10; i++)
    {
        scanf("%s %f %d",arr[i].name,&arr[i].price,&arr[i].pages);
    }
    

    printf("And this is what you entered:\n");
    for (int i = 0; i < 10; i++)
    {
        printf("%s %.2f %d\n",arr[i].name,arr[i].price,arr[i].pages);
    }

}

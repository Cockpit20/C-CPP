#include<stdio.h>

struct book2
{
    char name[20];
    float price;
    int pages;
};

struct book2 arr[3];

int main()
{
    printf("Enter names,prices & no. of pages of 3 books:\n");
    for (int i = 0; i < 3; i++)
    {
        scanf("%s %f %d",arr[i].name,&arr[i].price,&arr[i].pages);
    }
    

    printf("Details of the books:\n");
    printf("Name\tPrice\tPage\n");
    for (int i = 0; i < 3; i++)
    {
        printf("%s\t%.2f\t%d\n",arr[i].name,arr[i].price,arr[i].pages);
    }

}

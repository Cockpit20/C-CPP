#include<stdio.h>
struct person
{
    char name[20];
    int age;
    char sex;
    int date;
    int month;
    int year;
};

struct person persons[3];

void display(struct person *persons)
{
    printf("\n\nDetails of female members:\n\n");
    printf("Name\tAge\tSex\tDOB\n");
    for (int i = 0; i < 3; i++)
    {
        if((persons+i)->sex=='F')
        {
            printf("%s\t%d\t%c\t%d-%d-%d\n",(persons+i)->name,(persons+i)->age,(persons+i)->sex,(persons+i)->date,(persons+i)->month,(persons+i)->year);
        }
    }
    
}

int main()
{
    printf("Enter the details: \n\n");
    printf("Name\tAge\tSex\tDOB\n");
    for (int i = 0; i < 3; i++)
    {
        scanf("%s %d %c %d %d %d",persons[i].name,&persons[i].age,&persons[i].sex,&persons[i].date,&persons[i].month,&persons[i].year);
    }

    display(persons);
    
}
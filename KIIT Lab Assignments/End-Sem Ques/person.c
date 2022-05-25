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

struct person persons[10];

void display(struct person *persons)
{
    printf("\n\nSl.No.\tName\tAge\tDate of Birth\n");
    int c=1;
    for (int i = 0; i < 10; i++)
    {
        if((persons+i)->sex=='F')
        {
            printf("%d\t%s\t%d\t%d-%d-%d\n",c,(persons+i)->name,(persons+i)->age,(persons+i)->date,(persons+i)->month,(persons+i)->year);
            c++;
        }
        
    }
    
}

int main()
{
    printf("Enter the details: \n\n");
    printf("Name\tAge\tSex\tDate of Birth\n");
    for (int i = 0; i < 10; i++)
    {
        scanf("%s %d %c %d %d %d",persons[i].name,&persons[i].age,&persons[i].sex,&persons[i].date,&persons[i].month,&persons[i].year);
    }

    display(persons);
    

}
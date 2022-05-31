#include<stdio.h>
struct so_person
{
    char so_name[20];
    int so_age;
    char so_sex;
    int so_date;
    int so_month;
    int so_year;
};

struct so_person so_persons[10];

void display(struct so_person *so_persons)
{
    printf("List of female members:\n\nSl.No.\tName\tAge\tDate of Birth\n");
    int c=1;
    for (int i = 0; i < 10; i++)
    {
        if((so_persons+i)->so_sex=='F')
        {
            printf("%d\t%s\t%d\t%d-%d-%d\n",c,(so_persons+i)->so_name,(so_persons+i)->so_age,(so_persons+i)->so_date,(so_persons+i)->so_month,(so_persons+i)->so_year);
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
        scanf("%s %d %c %d %d %d",so_persons[i].so_name,&so_persons[i].so_age,&so_persons[i].so_sex,&so_persons[i].so_date,&so_persons[i].so_month,&so_persons[i].so_year);
    }

    display(so_persons);
}
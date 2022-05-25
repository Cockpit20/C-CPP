#include<stdio.h>

struct date_of_joining
{
    int date;
    int month;
    int year;
};

struct employee
{
    int emp_id;
    char name[20];
    float basic_salary;
    struct date_of_joining join_date;
};

struct employee student;

int main()
{
    printf("Enter the employee id: ");
    scanf("%d",&student.emp_id);

    printf("Enter the name: ");
    scanf("%s",&student.name);

    printf("Enter the basic salary: ");
    scanf("%f",&student.basic_salary);

    printf("Enter the date of joining: ");
    printf("\n Enter year: ");
    scanf("%d",&student.join_date.year);

    printf("Enter month: ");
    scanf("%d",&student.join_date.month);

    printf("Enter date: ");
    scanf("%d",&student.join_date.date);

    printf("Employee ID: %d \nEmployee name: %s \nBasic salary of the employee: %.2f \nDate of Joining: %d-%d-%d",student.emp_id,student.name,student.basic_salary,student.join_date.date,student.join_date.month,student.join_date.year);
}
#include <stdio.h>
#include <string.h>
struct student
{
    int roll;
    char name[50];
    char gender[10];
    float marks;
};
struct student tt[100];
int main()
{
    int n;
    printf("Enter the number of students:");
    scanf("%d", &n);
    for (int i = 0; i < n; i++)
    {
        printf("Enter the details of the student %d:\n",i+1);
        printf("Roll Number:");
        scanf("%d", &tt[i].roll);
        printf("Name:");
        scanf("%s", &tt[i].name);
        printf("Gender:");
        scanf("%s", &tt[i].gender);
        printf("Marks:");
        scanf("%f", &tt[i].marks);
    }
    printf("Roll Number\tName\tGender\tMarks");
    for (int i = 0; i < n; i++)
    {
        printf("\n%d\t\t%s\t%s\t%.2f",tt[i].roll,tt[i].name,tt[i].gender,tt[i].marks);
    }
}
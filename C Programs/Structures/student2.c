#include <stdio.h>
#include <string.h>
struct student
{
    int roll;
    char name[50];
    char gender[10];
    float marks_math;
    float marks_chem;
    float marks_phy;
    float marks_bio;
    float marks_eng;
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
        printf("Marks:\n");
        printf("Maths:");
        scanf("%f", &tt[i].marks_math);
        printf("Chemistry:");
        scanf("%f", &tt[i].marks_chem);
        printf("Physics:");
        scanf("%f", &tt[i].marks_phy);
        printf("Biology:");
        scanf("%f", &tt[i].marks_bio);
        printf("English:");
        scanf("%f", &tt[i].marks_eng);
    }
    
    for (int i = 0; i < n; i++)
    {
        if(tt[i].marks_math<40)
        printf("%s failed in Maths\n",tt[i].name);
        if(tt[i].marks_chem<40)
        printf("%s failed in Chemistry\n",tt[i].name);
        if(tt[i].marks_phy<40)
        printf("%s failed in Physics\n",tt[i].name);
        if(tt[i].marks_bio<40)
        printf("%s failed in Biology\n",tt[i].name);
        if(tt[i].marks_eng<40)
        printf("%s failed in English\n",tt[i].name);
    }
}
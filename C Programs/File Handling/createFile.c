#include <stdio.h>
int main()
{
    FILE *fp;
    int roll;
    char name[20];
    char gender[20];
    float marks;
    /* open for writing */
    fp = fopen("std.txt", "w");
    if (fp == NULL)
    {
        printf("Can not open the file");
    }
    printf("Enter one Student Details:");
    printf("\nRoll number of student:");
    scanf("%d", &roll);
    fprintf(fp,"Roll number of student= %d",roll);
    printf("Name of student:");
    scanf("%s",&name);
    fprintf(fp,"\nName of student= %s",name);
    printf("Gender of student:");
    scanf("%s",&gender);
    fprintf(fp,"\nGender of student= %s",gender);
    printf("Marks of student:");
    scanf("%f", &marks);
    fprintf(fp,"\nStudent Marks = %.2f\n", marks);
    fclose(fp);
}
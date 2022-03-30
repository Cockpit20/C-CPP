#include<stdio.h>
int main()
{
    int a,b,c,d;
    printf("Enter the marks obtained in Maths:");
    scanf("%d",&a);
    printf("Enter the marks obtained in Physics:");
    scanf("%d",&b);
    printf("Enter the marks obtained in BEE:");
    scanf("%d",&c);
    printf("Enter the marks obtained in AEC:");
    scanf("%d",&d);
    float avg=(float)(a+b+c+d)/4;
    int grade=avg/10;
    printf("\nThe average marks obtained is %.2f\n",avg);
    switch (grade)
    {
    case 9: printf("Grade: O");
        break;
    case 8: printf("Grade: E");
        break;
    case 7: printf("Grade: A");
        break;
    case 6: printf("Grade: B");
        break;
    case 5: printf("Grade: C");
        break;
    case 4: printf("Grade: D");
        break;
    default: printf("FAIL");
        break;
    }
}
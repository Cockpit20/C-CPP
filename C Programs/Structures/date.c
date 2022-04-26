#include<stdio.h>
int nextDate(int date,int month);
int nextMonth(int month);
int nextYear(int year);
int addDays(int date);
int addMonths(int month);
int addYears(int year);
void display(int date,int month,int year);
typedef struct date
{
    int date;
    int month;
    int year;
} dt;
dt ob;
int main()
{
    printf("Enter valid date in DD-MM-YYYY format:");
    scanf("%d %d %d",&ob.date,&ob.month,&ob.year);

    int nDate=nextDate(ob.date,ob.month);
    printf("The next date is %d\n",nDate);

    int nMonth=nextMonth(ob.month);
    printf("The next month is %d\n",nMonth);

    int nYear=nextMonth(ob.year);
    printf("The next year is %d\n",nYear);

    int newDate=addDays(ob.date);
    printf("The new date is %d-%d-%d\n",newDate%30,ob.month+newDate/30,ob.year);
    
    int newMonth=addMonths(ob.month);
    printf("The new date is %d-%d-%d\n",ob.date,newMonth%12,ob.year+newMonth/12);

    int newYear=addYears(ob.year);
    printf("The new date is %d-%d-%d\n",ob.date,ob.month,newYear);

    display(ob.date,ob.month,ob.year);
    
}
int nextDate(int date,int month)
{
    if((month==1||month==3||month==5||month==7||month==8||month==10||month==12) && date==31){
        return 1;
    }
    if((month==4||month==6||month==9||month==11) && date==30){
        return 1;
    }
    if(month==2 && date==28){
        return 1;
    }
    return date+1;
}

int nextMonth(int month)
{
    if(month==12)
    return 1;
    return month+1;
}

int nextYear(int year)
{
    return year+1;
}

int addDays(int date)
{
    int days;
    printf("Enter number of days to be added:");
    scanf("%d",&days);
    return date+days;
}

int addMonths(int month)
{
    int months;
    printf("Enter number of months to be added:");
    scanf("%d",&months);
    // if(month+months>12)
    // return (month+months)%12;
    return month+months;
}

int addYears(int year)
{
    int years;
    printf("Enter number of years to be added:");
    scanf("%d",&years);
    return year+years;
}

void display(int date,int month,int year)
{
    printf("Date in DD-MM-YYYY format : %d-%d-%d",date,month,year);
}
 
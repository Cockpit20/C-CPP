#include<stdio.h>
int main()
{
    int rollno=1;
    float max=0;
    int maxIndex;
    while(rollno<=8)
    {
        int chem,math,bio,pcom,eg;
        printf("\nEnter marks in five subjects for student with roll number %d:",rollno);
        scanf("%d %d %d %d %d",&chem,&math,&bio,&pcom,&eg);
        float avg=(float)(chem+math+bio+pcom+eg)/5;
        printf("Average Marks obtained by student %d is %.2f",rollno,avg);
        if(avg>max){
            max=avg;
            maxIndex=rollno;
        }
        rollno++;
    }
    printf("\nThe highest marks %.2f is obtained by student %d ",max,maxIndex);
}
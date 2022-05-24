#include<stdio.h>

int main()
{
    FILE *fp;
    int a[10],sum=0;
    fp=fopen("data.in","r");
    for (int i = 0; i < 10; i++)
    {
        fscanf(fp,"%d",&a[i]);
        sum+=a[i];
    }
    printf("Sum= %d \n",sum);
    fclose(fp);
}
#include<stdio.h>

int main()
{
    FILE *fp;
    int a[10]={2,4,6,8,1,3,5,7,9,0};
    fp=fopen("data.out","w");
    for (int i = 0; i < 10; i++)
    {
        fprintf(fp,"%d ",a[i]);
    }
    fclose(fp);
}
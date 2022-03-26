#include<stdio.h>
int main()
{
    int n[]={234,342,456,867,231,459,970,959,349,104};
    int ln=0; int sln=0;
    for (int i=0;i<10;i++)
    {
        if (n[i]>ln)
        ln=n[i];
    }
    for (int i=0;i<10;i++)
    {
        if (n[i]<ln && n[i]>sln)
        sln=n[i];
    }
    printf("The second largest number is %d\n",sln);
    printf("The largest number is %d",ln);
}

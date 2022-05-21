#include<stdio.h>
#include<stdlib.h>
int main()
{
    int n;
    float *data;
    printf("Enter total number of elements(1 to 100): ");
    scanf("%d",&n);
    data=(float*)calloc(n,sizeof(float));
    for (int i = 0; i < n; i++)
    {
        printf("Enter number %d: ",i+1);
        scanf("%f",data+i);
    }
    for (int i = 0; i < n; i++)
    {
        if(*(data+i)>*data)
        *data=*(data+i);
    }
    printf("Largest element= %.2f",*data);
    free(data);
    
    
}
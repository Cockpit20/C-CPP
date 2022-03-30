#include <stdio.h>
#include <math.h>
#define g 9.8
int main()
{
    int l=10;
    float t1,t2,t3,t4,t5;
    printf("Length\tTime Period\n");
    t1=(float)(2*3.14*sqrt(l/g));
    printf("%dm\t%.2fs\n",l,t1);
    l+=10;
    t2=(float)(2*3.14*sqrt(l/g));
    printf("%dm\t%.2fs\n",l,t2);
    l+=10;
    t3=(float)(2*3.14*sqrt(l/g));
    printf("%dm\t%.2fs\n",l,t3);
    l+=10;
    t4=(float)(2*3.14*sqrt(l/g));
    printf("%dm\t%.2fs\n",l,t4);
    l+=10;
    t5=(float)(2*3.14*sqrt(l/g));
    printf("%dm\t%.2fs\n",l,t5);
}
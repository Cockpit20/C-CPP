#include<stdio.h>
int main()
{
    int po;
            printf("Press 1,if the object is at infinity:\n");
            printf("Press 2,if the object is beyond the centre of curvature C:\n");
            printf("Press 3,if the object is at the centre of curvature C:\n");
            printf("Press 4,if the object is between C and F:\n");
            printf("Press 5,if the object is at focus F:\n");
            scanf("%d",&po);
            printf("Position of object\tSize of Image\t\tNature of Image\n");
            if(po==1)
            {
                printf("At the focus F\t\tHIghly Diminished\tReal and Inverted");
            }
            else if(po==2)
            {
                printf("BEtween F and C\t\tDiminished\t\tReal and Inverted");
            }
            else if(po==3)
            {
                printf("At C\t\t\tSame Size\t\tReal and Inverted");
            }
            else if(po==4)
            {
                printf("BEyond C\t\tEnlarged\t\tReal and Inverted");
            }
            else if(po==5)
            {
                printf("At infinity F\t\tHIghly Enlarged\t\tReal and Inverted");
            }
}
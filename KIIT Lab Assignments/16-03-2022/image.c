#include<stdio.h>
int main()
{
    int image;
    printf("Press 1 for Mirror:\n");
    printf("Press 2 for Lens:\n");
    scanf("%d",&image);
    if (image==1)
    {
        int mi;
        printf("Press 1 for concave mirror:\n");
        printf("Press 2 for convex mirror:\n");
        scanf("%d",&mi);
        if (mi==1)
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
        else if(mi==2)
        {
            int po;
            printf("Press 1,if the object is at infinity:\n");
            printf("Press 2,if the object is between infinity and the pole:\n");
            scanf("%d",&po);
            printf("Position of object\tSize of Image\t\tNature of Image\n");
            if(po==1)
            {
                printf("At the focus F\t\tHIghly Diminished\tVirtual and Erect");
            }
            else if(po==2)
            {
                printf("BEtween P and F\t\tDiminished\t\tVirtual and Erect");
            }
        }
    }
    else if(image==2)
    {
        int mi;
        printf("Press 1 for concave lens:\n");
        printf("Press 2 for convex lens:\n");
        scanf("%d",&mi);
        if (mi==1)
        {
            int po;
            printf("Press 1,if the object is at infinity:\n");
            printf("Press 2,if the object is beyond infinity and zero:\n");
            scanf("%d",&po);
            printf("Position of object\t\tSize of Image\t\tNature of Image\n");
            if(po==1)
            {
                printf("At F2\t\t\t\tHIghly Diminished\tVirtual and Erect");
            }
            else if(po==2)
            {
                printf("BEtween f1 and Optical center\tDiminished\t\tVirtual and Erect");
            }
        }
        else if(mi==2)
            {        
                int po;
                printf("Press 1,if the object is at infinity:\n");
                printf("Press 2,if the object is beyond 2F1:\n");
                printf("Press 3,if the object is between 2F1 and F1:\n");
                printf("Press 4,if the object is at F1:\n");
                printf("Press 5,if the object is at 2F1:\n");
                printf("Press 6,if the object is between F1 and 0:\n");
                scanf("%d",&po);
                printf("Position of object\tSize of Image\t\tNature of Image\n");
                if(po==1)
                    {
                        printf("At F2\t\t\tDiminished\t\tReal and Inverted");
                    }
                    else if(po==2)
                    {
                        printf("BEtween 2F2 and F2\tDiminished\t\tReal and Inverted");
                    }
                    else if(po==3)
                    {
                        printf("Beyond 2F2\t\tEnlarged\t\tReal and Inverted");
                    }
                    else if(po==4)
                    {
                        printf("At infinity\t\tEnlarged\t\tReal and Inverted");
                    }
                    else if(po==5)
                    {
                        printf("At 2F2\t\t\tSame Size\t\tReal and Inverted");
                    }
                    else if(po==6)
                    {
                        printf("On the same side\tEnlarged\t\tVirtual and Erect");
                    }
            }
    }
}
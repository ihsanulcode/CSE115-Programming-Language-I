#include<stdio.h>
#include<math.h>

float length(float x1, float y1, float x2, float y2);

int main(void)
{
    float x1,x2,x3,x4,x5,x6,y1,y2,y3,y4,y5,y6,AB,BC,CD,DE,EF,FA;
    printf("A Coordinates: \n");
    printf("X,Y: ");
    scanf("%f %f",&x1,&y1);

    printf("B Coordinates: \n");
    printf("X,Y: ");
    scanf("%f %f",&x2,&y2);

    printf("C Coordinates: \n");
    printf("X,Y: ");
    scanf("%f %f",&x3,&y3);

    printf("D Coordinates: \n");
    printf("X,Y: ");
    scanf("%f %f",&x4,&y4);

    printf("E Coordinates: \n");
    printf("X,Y: ");
    scanf("%f %f",&x5,&y5);

    printf("F Coordinates: \n");
    printf("X,Y: ");
    scanf("%f %f",&x6,&y6);

    AB = length(x1,y1,x2,y2);
    printf("Length of side AB: %.2f\n",AB);
    BC = length(x2,y2,x3,y3);
    printf("Length of side BC: %.2f\n",BC);
    CD = length(x3,y3,x4,y4);
    printf("Length of side CD: %.2f\n",CD);
    DE = length(x4,y4,x5,y5);
    printf("Length of side DE: %.2f\n",DE);
    EF = length(x5,y5,x6,y6);
    printf("Length of side EF: %.2f\n",EF);
    FA = length(x6,y6,x1,y1);
    printf("Length of side FE: %.2f\n",FA);

    return 0;

}
float length(float x1, float y1, float x2, float y2)
{
    float len;
    len = sqrt(pow((x2-x1),2) + pow((y2-y1),2));
    return len;
}




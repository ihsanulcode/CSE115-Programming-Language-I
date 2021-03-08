//Write a program that reads in the radius of a circle and prints the circles diameter,circumference and area.

#include <stdio.h>
#define PI 3.1416

int main (void)
{
    float r,diameter,circumference,area;

    printf("Enter the radius of your circle: ");
    scanf("%f", &r);

    diameter= r*2;
    circumference = 4*PI;
    area = PI*r*r;

    printf("\nDiameter: %f\nCircumference: %f\nArea: %f\n", diameter,circumference,area);


    return 0;

}

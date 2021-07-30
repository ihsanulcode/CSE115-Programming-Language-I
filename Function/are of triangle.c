#include<stdio.h>
float getBase();
float getHeight();
float getarea(float,float);
int main(void)
{
    float base;
    base = getBase();
    float height;
    height = getHeight();
    float area;
    area = getarea(base,height);
    printf("The base is: %.2f\n",base);
    printf("The height is: %.2f\n",height);
    printf("Area is: %.2f",area);
    return 0;
}
float getBase()
{
    float base;
    printf("Enter the base of triangle: ");
    scanf("%f",&base);
    return base;
}
float getHeight()
{
    float height;
    printf("\nEnter the height of triangle: ");
    scanf("%f",&height);
    return height;
}
float getarea(float base,float height)
{
    float area;
    area = 0.5*base*height;
    return area;
}

#include<stdio.h>
int main(void)
{
    float radius;
    printf("Enter the radius: ");
    scanf("%f",&radius);

    float area = 3.14*radius*radius;
    float perimeter = 2.0*3.14*radius;

    printf("Area of the circle: %.1f\n",area);
    printf("Perimeter of the circle: %.1f",perimeter);

    return 0;
}

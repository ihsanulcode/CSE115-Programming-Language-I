#include<stdio.h>
void findArea(int radius)
{
    float area = 4*3.14*radius*radius;
    printf("Area of the sphere: %.2f\n",area);
}
void findVolume(int radius)
{
    float vol = (4.0/3.0)*3.14*pow(radius,3);
    printf("Volume of the sphere: %.2f\n",vol);
}
int main()
{
    float radius;
    printf("Enter the radius: ");
    scanf("%f",&radius);

    findArea(radius);
    findVolume(radius);
    return 0;
}

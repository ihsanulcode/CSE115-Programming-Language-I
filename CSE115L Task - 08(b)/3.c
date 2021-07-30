#include<stdio.h>
double getArea(int a,int b,int h)
{
    return (0.5*(a+b)*h);
}
int main()
{
    double a,b,h;
    printf("Enter a: ");
    scanf("%lf",&a);
    printf("Enter b: ");
    scanf("%lf",&b);
    printf("Enter h: ");
    scanf("%lf",&h);

    double area = getArea(a,b,h);
    printf("Area of trapezoid: %.1lf",area);
    return 0;
}

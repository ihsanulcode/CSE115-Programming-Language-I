#include<stdio.h>
void areaPeri(int *r,float *a,float *p)
{
    *a = 3.14*(*r)*(*r);
    *p = 2*3.14*(*r);
}
int main(void)
{
    int r = 4;
    float area;
    float p;
    areaPeri(&r,&area,&p);
    printf("Area: %.2f\nPerimeter: %0.2f",area,p);
    return 0;
}

#include<stdio.h>
int main(void)
{
    float a,b,c,d,e;
    printf("Enter 5 numbers:\n");
    scanf("%f%f%f%f%f",&a,&b,&c,&d,&e);

    float average = (a+b+c+d+e)/5.0;
    printf("Average: %.2f",average);

    return 0;
}

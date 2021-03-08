//Convert Celsius to Fahrenheit unit.

#include<stdio.h>

int main(void)
{
    float celsius,fahrenheit;

    printf("Enter temperature in celsius: ");
    scanf("%f", &celsius);

    fahrenheit=(celsius*9/5)+32;
    //celsius = (f-32)*(5/9);
    printf("Fahrenheit: %.2f",fahrenheit);

    return 0;

}

#include<stdio.h>
int main(void)
{
    float base;
    printf("Enter base: ");
    scanf("%f",&base);

    float hypotenuse;
    printf("Enter hypotenuse: ");
    scanf("%f",&hypotenuse);

    float height;
    if(base>hypotenuse){
        height = sqrt(pow(base,2)-pow(hypotenuse,2));
    }
    else{
        height = sqrt(pow(hypotenuse,2)-pow(base,2));
    }
    printf("Height: %.2f\n",height);

    float area = 0.5*base*height;
    printf("Area is: %.2f",area);

    return 0;
}

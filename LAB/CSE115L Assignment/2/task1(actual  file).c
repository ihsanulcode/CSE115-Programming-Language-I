//Task 1

#include<stdio.h>

int main(void)
{
    float a;
    float b;
    float subtract;

    printf("Enter two real numbers: \n");
    scanf("%f %f",&a,&b);

    if(a > b){
        subtract = a-b;
        printf("\n%.2f - %.2f = %.2f",a,b,subtract);
    }
    else{
        subtract = b-a;
        printf("\n%.2f - %.2f = %.2f",b,a,subtract);
    }



    return 0;
}

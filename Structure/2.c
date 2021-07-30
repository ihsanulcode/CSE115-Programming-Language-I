#include <stdio.h>
struct Complex{
    float real;
    float imag;
}num1,num2,sum;

struct Complex add(struct Complex n1, struct Complex n2){

    struct Complex n3;
    n3.real = n1.real+n2.real;
    n3.imag = n1.imag+n2.imag;

    return n3;
}
int main()
{
    printf("Enter First complex number:\n");
    scanf("%f %f", &num1.real, &num1.imag);
    printf("Enter second complex number:\n");
    scanf("%f %f", &num2.real, &num2.imag);

    sum = add(num1,num2);
    printf("\nSum of two complex number: %.3f %.3f", sum.real,sum.imag);

    return 0;
}

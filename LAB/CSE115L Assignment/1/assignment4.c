//Ask user for two integers a and b. Then swap(interchange)the values of a and b.

#include<stdio.h>

int main(void)
{
    int a,b,x;

    printf("Enter a: ");
    scanf("%d", &a);
    printf("Enter b: ");
    scanf("%d", &b);

    x = a;
    a = b;
    b = x;

    printf("\nAfter swapping:\na: %d\nb: %d", a,b);

    return 0;

}

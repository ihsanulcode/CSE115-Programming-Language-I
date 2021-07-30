#include<stdio.h>
int main(void)
{
    int a,b,c;
    printf("Enter three integers\n");
    printf("a = ");
    scanf("%d",&a);
    printf("b = ");
    scanf("%d",&b);
    printf("c = ");
    scanf("%d",&c);

    int temp = b;
    b = a;
    a = c;
    c = temp;


    printf("\na = %d",a);
    printf("\nb = %d",b);
    printf("\nc = %d",c);

    return 0;
}

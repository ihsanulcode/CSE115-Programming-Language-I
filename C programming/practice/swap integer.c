#include<stdio.h>
int main(void)
{
    int a,b;
    printf("Enter two integer number: \n");
    scanf("%d%d",&a,&b);

    int c = a;
    a = b;
    b = c;

    printf("After swapping:\n");
    printf("a: %d\n",a);
    printf("b: %d\n",b);
}

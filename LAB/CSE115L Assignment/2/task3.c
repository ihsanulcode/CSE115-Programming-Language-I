//Task 3

#include<stdio.h>

int main(void)
{
    int a,b,c,discriminant;

    printf("Enter a,b and c where a*x*x+b*x+c = 0\n");
    scanf("%d %d %d",&a,&b,&c);

    discriminant = b*b - 4*a*c;

    if(discriminant == 0)
    {
        printf("\nReal roots");
    }
    else if(discriminant > 0)
    {
        printf("\nReal roots");
    }
    else if(discriminant < 0)
    {
        printf("\nNo real roots");
    }
    else{
        printf("Try again!");
    }

    return 0;
}

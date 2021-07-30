#include<stdio.h>
int main(void)
{
    int a,b,c;
    printf("Enter three integers\n");
    printf("Enter number: ");
    scanf("%d",&a);
    printf("Enter number: ");
    scanf("%d",&b);
    printf("Enter number: ");
    scanf("%d",&c);

    // a is the largest number of the three
    if(a >= b && a >= c)
    {
        if(b >= c)
            printf("\nThe 2nd largest number is %d", b);
        else
            printf("\nThe 2nd largest number is %d", c);
    }
    // b is the largest number of the three
    else if(b >= a && b >= c)
    {
        if(a >= c)
            printf("\nThe 2nd largest number is %d",a);
        else
            printf("\nThe 2nd largest number is %d",c);
    }

    // c is the largest number of the three
    else if(a >= b)
    {
        printf("\nThe 2nd largest number is %d", a);
    }
    else
    {
        printf("\nThe 2nd largest number is %d", b);
    }

    return 0;
}

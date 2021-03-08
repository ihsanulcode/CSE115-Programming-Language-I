//Task 2

#include<stdio.h>

int main(void)
{
    int n;
    int x;
    printf("Enter a number: ");
    scanf("%d",&n);

    x = n%2;
    switch(x)
    {
        case 0:
        printf("\n%d is an even number.",n);
        break;

        default:
        printf("\n%d is an odd number.",n);
        break;

    }

    return 0;

}

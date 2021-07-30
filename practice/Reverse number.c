#include <stdio.h>

int main()
{

    int n, rev = 0;

    printf("Enter an integer: ");
    scanf("%d", &n);


    while (n != 0)
    {
        rev = rev * 10 + (n%10);
        n = n/10;
    }


    printf("Reverse = %d", rev);

    return 0;
}


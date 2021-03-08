#include <stdio.h>

int main()
{
    int n, m, p, q;

    printf("Enter the value for X+Y: ");
    scanf("%d", &n);
    printf("Enter the value for X-Y: ");
    scanf("%d", &m);

    p = (n+m)/2;
    q = (n-m)/2;

    printf("X is: %d\n", p);
    printf("Y is: %d\n", q);

    return 0;
}

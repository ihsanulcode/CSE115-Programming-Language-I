#include <stdio.h>

int main(void)
{
    int size, i;

    printf("Enter the number of element in the array: ");
    scanf("%d", &size);

    int a[size], b[size];

    printf("Enter the elements for 1st array:\n");

    for (i = 0; i < size; i++)
        scanf("%d", &a[i]);

    for (i = 0; i < size; i++)
        b[i] = a[size-1-i];

    printf("reversed array: ");

    for(i=0; i<size; i++)
    {
        printf("%d ", b[i]);
    }

    return 0;
}

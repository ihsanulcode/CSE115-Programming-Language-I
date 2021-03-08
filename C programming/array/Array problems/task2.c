#include<stdio.h>

int main(void)
{
    int n,row;
    printf("Enter size: ");
    scanf("%d",&n);
    int arr[n];

    for(row=0;row<n;row++)
    {
        printf("Input elements for arr[%d]: ",row);
        scanf("%d",&arr[row]);
    }

    printf("\nArray in reverse order: ");
    for(row = n-1; row>=0; row--)
    {
        printf("%d", arr[row]);
    }



}

#include<stdio.h>

int main(void)
{
    int n;
    printf("Enter Array Size: ");
    scanf("%d",&n);

    int arr[n];
    int row;

    for(row=0; row<n; row++)
    {
        printf("Enter the elements for arr[%d]: ",row);
        scanf("%d",&arr[row]);
    }

    int sum = 0;

    for(row=0;row<n;row++)
    {
        sum += arr[row];
    }

    int avg = sum/n;
    printf("\nAverage : %d",avg);
    return 0;
}

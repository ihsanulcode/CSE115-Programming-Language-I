#include<stdio.h>

int main(void)
{
    int n,row,t;
    printf("Enter size: ");
    scanf("%d",&n);
    int arr[n];

    for(row=0;row<n;row++)
    {
        printf("Input elements for arr[%d]: ",row);
        scanf("%d",&arr[row]);
    }

     t = arr[0];
     for (row = 1; row < n; row++) {
        if (t < arr[row])
            t = arr[row];
    }

    printf("The max element is: %d", arr[0]);
    return 0;
}

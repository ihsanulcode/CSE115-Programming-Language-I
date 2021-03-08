#include<stdio.h>
int main(void)
{
    int arr[3][3];
    int row,col;

    for(row=0;row<3;row++)
    {
        for(col=0;col<3;col++)
        {
            printf("Enter the element of arr[%d][%d]: ",row,col);
            scanf("%d",&arr[row][col]);
        }
    }

    int value;
    printf("\nEnter the value to be searched: ");
    scanf("%d",&value);

    int a,b;
    for(row=0;row<3;row++)
    {
        for(col=0;col<3;col++)
        {
            if(value == arr[row][col])
            {
                a = row;
                b = col;
                break;
            }
        }
    }

    printf("\nThe value is at Row %d column %d.",a,b);
    return 0;
}

#include<stdio.h>

int main(void)
{
    int row,col,sum=0;
    printf("Enter the number of row: ");
    scanf("%d",&row);
    printf("Enter the number of column: ");
    scanf("%d",&col);

    int A[row][col];

    int i,j;
    for(i=0;i<row;i++)
    {
        for(j=0;j<col;j++)
        {
            printf("\nEnter element for A[%d][%d]: ",i,j);
            scanf("%d",&A[i][j]);
        }
    }

    int n;
    printf("\nEnter which row to find sum: ");
    scanf("%d",&n);

    for(j=0;j<col;j++)
    {

        sum += A[n-1][j];

    }
    printf("\nSum of row %d: %d",n,sum);
}


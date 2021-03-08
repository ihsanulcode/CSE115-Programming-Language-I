#include<stdio.h>

int main(void)
{
    int row,col,sum=0;
    printf("Enter the number of row: ");
    scanf("%d",&row);
    printf("Enter the number of column: ");
    scanf("%d",&col);

    int A[row][col];
    int transpose[row][col];

    int i,j;
    for(i=0;i<row;i++)
    {
        for(j=0;j<col;j++)
        {
            printf("\nEnter element for A[%d][%d]: ",i,j);
            scanf("%d",&A[i][j]);
        }
    }

    printf("\nOriginal matrix: \n");
    for (i = 0; i < row; i++)
    {
        for (j = 0; j < col; j++){

                printf("%d  ", A[i][j]);

            if (j == col - 1)

                printf("\n");
        }

    }

    for (i = 0; i < row; ++i)
    {
        for (j = 0; j < col; ++j) {
            transpose[j][i] = A[i][j];
        }
    }


    printf("\nTranspose matrix:\n");
    for (i = 0; i < col; ++i)
    {
        for (j = 0; j < row; ++j) {
            printf("%d  ", transpose[i][j]);
            if (j == row - 1)
                printf("\n");
        }
    }
    return 0;

}



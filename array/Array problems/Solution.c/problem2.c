#include<stdio.h>
int main(void)
{
    int m,n;

    printf("Row: ");
    scanf("%d",&m);
    printf("\nColumn: ");
    scanf("%d",&n);

    int A[m][n];
    int B[m][n];
    int sum[m][n];

    int row,col;

    printf("\nEnter first array elements:\n");
    for(row=0;row<m;row++)
    {
        for(col=0;col<n;col++)
        {
            printf("\nA[%d][%d]: ",row,col);
            scanf("%d",&A[row][col]);
        }
    }

    printf("\nEnter second array elements:\n");
    for(row=0;row<m;row++)
    {
        for(col=0;col<n;col++)
        {
            printf("\nB[%d][%d]: ",row,col);
            scanf("%d",&B[row][col]);
        }
    }

    printf("\nFirst Array:\n");
    for(row= 0; row < m; row++)
    {
        for(col=0;col<n;col++)
        {
            printf("\t%d",A[row][col]);
        }
        printf("\n");
    }

    printf("\nSecond Array:\n");
    for(row=0;row<m;row++)
    {
        for(col=0;col<n;col++)
        {
            printf("\t%d",B[row][col]);
        }
        printf("\n");
    }


    for(row=0;row<m;row++)
    {
        for(col=0;col<n;col++)
        {
            sum[row][col] = A[row][col] + B[row][col];
        }
    }

    printf("\nSum:\n");
    for(row=0;row<m;row++)
    {
        for(col=0;col<n;col++)
        {
            printf("\t%d",sum[row][col]);
        }
        printf("\n");
    }

    return 0;
}

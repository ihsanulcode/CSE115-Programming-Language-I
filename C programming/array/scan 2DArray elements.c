#include<stdio.h>
int main(void)
{
    int m,n;
    printf("Enter the number of row: ");
    scanf("%d",&m);
    printf("Enter the number of column: ");
    scanf("%d",&n);
    int arr [m][n];

    int row,col;
    for(row=0;row<m;row++)
    {
        for(col=0;col<n;col++)
        {
            printf("Enter element for arr[%d][%d]: ",row,col);
            scanf("%d",&arr[row][col]);

        }
    }
    return 0;

}

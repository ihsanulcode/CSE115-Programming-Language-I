#include<stdio.h>
int main(void)
{
    int m,n;
    printf("Enter row and column number: \n");
    scanf("%d%d",&m,&n);

    int arr[m][n];
    int tarr[n][m];

    int i,j;
    for(i=0;i<m;i++)
    {
        for(j=0;j<n;j++)
        {
            printf("Enter element at arr[i][j]: ",i,j);
            scanf("%d",&arr[i][j]);
        }
    }

    printf("\nOriginal Matrix:\n");
    for(i=0;i<m;i++)
    {
        for(j=0;j<n;j++)
        {
            printf("\t%d",arr[i][j]);
        }
        printf("\n");
    }

    for(i=0;i<m;i++)
    {
        for(j=0;j<n;j++)
        {
            tarr[j][i] = arr[i][j];
        }
    }

    printf("\nTransposed Matrix:\n");
    for(i=0;i<n;i++)
    {
        for(j=0;j<m;j++)
        {
            printf("\t%d",tarr[i][j]);
        }
        printf("\n");
    }
}

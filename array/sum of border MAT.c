#include<stdio.h>
int main(void)
{
    int m,n;
    printf("Enter the number of rows and column:\n");
    scanf("%d%d",&m,&n);

    int arr[m][n];
    int i,j;
    for(i=0;i<m;i++)
    {
        for(j=0;j<n;j++)
        {
            printf("Enter elements at arr[%d][%d]: ",i,j);
            scanf("%d",&arr[i][j]);
        }
    }



    int sum = 0;
    for(i=0;i<m;i++)
    {
        for(j=0;j<n;j++)
        {
            if(i == 0)
                sum += arr[i][j];
            else if(i == m-1)
                sum += arr[i][j];
            else if(j == 0)
                sum += arr[i][j];
            else if(j = n-1)
                sum += arr[i][j];
        }
    }

    printf("\nSum of boundary: %d",find,sum);
    return 0;
}


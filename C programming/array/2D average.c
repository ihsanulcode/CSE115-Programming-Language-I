#include<stdio.h>
int main(void)
{
    int m,n;
    printf("Enter row: ");
    scanf("%d",&m);
    printf("Enter column: ");
    scanf("%d",&n);

    float arr[m][n];
    int i,j;

    for(i=0;i<m;i++)
    {
        for(j=0;j<n;j++)
        {
            printf("Enter element at arr[%d][%d]: ",i,j);
            scanf("%f",&arr[i][j]);
        }
    }

    int sum = 0.0;
    for(i=0;i<m;i++)
    {
        for(j=0;j<n;j++)
        {
            sum += arr[i][j];
        }
    }

    float avg = (sum/(float)(m*n));
    printf("2D Average: %0.2f",avg);
    return 0;
}

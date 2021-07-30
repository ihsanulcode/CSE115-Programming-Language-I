#include<stdio.h>
int main()
{
    int m,n;
    printf("Number of row & column for both Matrix:\n");
    scanf("%d%d",&m,&n);
    int matrix1[m][n];
    int matrix2[m][n];
    int addition[m][n];

    printf("Enter 1st matrix:\n");
    for(int i=0;i<m;i++){
        for(int j=0;j<n;j++){
            printf("Enter element [%d][%d]: ",i,j);
            scanf("%d",&matrix1[i][j]);
        }
    }

    printf("Enter 2nd matrix:\n");
    for(int i=0;i<m;i++){
        for(int j=0;j<n;j++){
            printf("Enter element [%d][%d]: ",i,j);
            scanf("%d",&matrix2[i][j]);
        }
    }

    for(int i=0;i<m;i++){
        for(int j=0;j<n;j++){
            addition[i][j] = matrix1[i][j]+matrix2[i][j];
        }
    }

    //printing
    printf("Answer of addition:\n");
    for(int i=0;i<m;i++){
        for(int j=0;j<n;j++){
            printf("\t%d",addition[i][j]);
        }
        printf("\n");
    }

    return 0;

}

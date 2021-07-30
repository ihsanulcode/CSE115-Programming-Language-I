#include<stdio.h>
int main()
{
    int m1,n1,m2,n2; //variable declaration

    //getting rows, columns input
    printf("Matrix A : row    :  ");
    scanf("%d",&m1);
    printf("Matrix A : Column :  ");
    scanf("%d",&n1);
    printf("Matrix B : row    :  ");
    scanf("%d",&m2);
    printf("Matrix B : Column :  ");
    scanf("%d",&n2);

    //declaring 2D arrays
    int matA[m1][n1],matB[m2][n2],matC[m1][n2];

    //checking if dimensions are valid or not for dot product
    if(n1!=m2){
        printf("\n\nInvalid dimension, Try again!\n");
    }
    else{

        //getting matrix A elements
        printf("\n\nEnter Matrix A:\n");
        for(int i=0;i<m1;i++)
        {
            for(int j=0;j<n1;j++)
            {
                scanf("%d",&matA[i][j]);
            }
        }

        //getting matrix B elements
        printf("\n\nEnter Matrix B:\n");
        for(int i=0;i<m2;i++)
        {
            for(int j=0;j<n2;j++)
            {
                scanf("%d",&matB[i][j]);
            }
        }


        int sum;
        //calculating matrix dot product
        for(int i=0;i<m1;i++)
        {
            for(int j=0;j<n2;j++)
            {
                sum=0;
                for(int k=0;k<n1;k++)
                {
                    sum += matA[i][k] * matB[k][j];
                    matC[i][j] = sum;
                }
            }
        }

        //printing result matrix
        printf("\n\nMatrix C:\n");
        for(int i=0;i<m1;i++)
        {
            for(int j=0;j<n2;j++)
            {
                printf("\t%d",matC[i][j]);
            }
            printf("\n");
        }
    }
    return 0;
}

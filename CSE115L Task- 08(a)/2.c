#include<stdio.h>
int main()
{
    int row,col;
    printf("Enter number of rows: ");
    scanf("%d",&row);
    printf("Enter number of columns: ");
    scanf("%d",&col);

    int arr[row][col];

    printf("Enter elements:\n");
    for(int i=0;i<row;i++){
        for(int j=0;j<col;j++){
            scanf("%d",&arr[i][j]);
        }
    }

    int colkey;
    printf("\nEnter which column to find sum of: ");
    scanf("%d",&colkey);

    int sum = 0;
    for(int i=0;i<row;i++){
        sum += arr[i][colkey-1];
    }
    printf("Sum of column %d: %d",colkey,sum);
}

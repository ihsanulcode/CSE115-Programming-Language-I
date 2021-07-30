#include<stdio.h>
void search();
int main(void)
{
    int n,row;
    printf("Enter size: ");
    scanf("%d",&n);
    int arr[n];

    for(row=0;row<n;row++)
    {
        printf("Input elements for arr[%d]: ",row);
        scanf("%d",&arr[row]);
    }

    int num;
    printf("Enter the number to search\n");
    scanf("%d",&num);
}

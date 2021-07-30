#include<stdio.h>
int main(void)
{
    int n;
    printf("Enter array size: ");
    scanf("%d",&n);

    int arr[n];
    int i;
    int *a;
    a = arr;

    for(i=0;i<n;i++)
    {
        printf("Enter element at arr[%d]: ",i);
        scanf("%d",&arr[i]);
    }

     printf("\nArray in reverse order: ");
    for(i = n-1; i>=0; i--)
    {
        printf("%d\t", (*a+i));
    }
}

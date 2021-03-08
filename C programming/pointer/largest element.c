#include<stdio.h>
int main(void)
{
    int n;
    printf("Enter the size of array: ");
    scanf("%d",&n);

    int a[n];
    int *arr = &a;
    int i;

    for(i=0;i<n;i++)
    {
        printf("Enter element at arr[%d]: ",i);
        scanf("%d",(arr+i));
    }

    printf("\nArray: ");
    for(i=0;i<n;i++)
    printf("%d ",*(arr+i));

    for(i=0;i<n;i++)
    {
        if(*arr < *(arr+i))
            *arr = *(arr+i);
    }
    printf("\nLargest element is: %d",*arr);


}

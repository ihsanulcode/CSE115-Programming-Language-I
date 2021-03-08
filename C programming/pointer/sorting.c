#include<stdio.h>
int main(void)
{
    int n;
    printf("Enter array size: ");
    scanf("%d",&n);

    int arr[n];
    int *p = &arr;
    printf("Insert array elements: \n");
    int i,j,temp;
    for(i=0;i<n;i++)
        scanf("%d",p+i);

    printf("\nArray: ");
    for(i=0;i<n;i++)
    printf("%d ",*(p+i));

    for(i=0;i<n;i++)
    {
        for(j=0;j<n-1;j++)
        {
            if( *(p+j) > *(p+j+1))
            {
                temp = *(p+j);
                *(p+j) = *(p+j+1);
                *(p+j+1) = temp;
            }
        }
    }

    printf("\nAfter sorting: ");
    for(i=0;i<n;i++)
        printf("%d ",*(p+i));

}

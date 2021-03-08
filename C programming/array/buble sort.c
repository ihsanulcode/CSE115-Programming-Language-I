#include<stdio.h>
int main(void)
{
    int size;
    printf("Array size: ");
    scanf("%d",&size);

    int arr[size];
    int i,j,temp;

    for(i=0;i<size;i++)
    {
        printf("Enter element at arr[%d]: ",i);
        scanf("%d",&arr[i]);
    }

    for(i=0;i<size;i++)
    {
        for(j=0;j<(size-1);j++)
        {
            if(arr[j] > arr[j+1])
            {
                temp = arr[j];
                arr[j] = arr[j+1];
                arr[j+1] = temp;
            }
        }
    }
    for(i=0;i<size;i++)
        printf("%d ",arr[i]);

    return 0;
}


#include <stdio.h>

void search(int b[],int size,int value);

int main(void)
{
    int size, i, value;

    printf("Enter the number of element in the array: \n");
    scanf("%d", &size);

    int a[size];



    for (i = 0; i < size; i++){
        printf("Enter the elements for a[%d]: ",i);
        scanf("%d", &a[i]);
    }


    printf("enter the value to search in array: ");
    scanf("%d", &value);

    search(a, size, value);

    return 0;
}

void search(int b[],int size,int value)
{
    int i;

    for(i=0; i<size; i++)
    {
        if(b[i] == value)
        {
            printf("Value found at index %d\n", i);
            break;
        }
    }
    if(i == size)
        printf("Value not found\n");
}

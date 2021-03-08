#include <stdio.h>
void search(int f,int size, int *array);
int main(void)
{
    int i,size;
    printf("Enter array size: ");
    scanf("%d",&size);

    int arr[size];
    for(i=0;i<size;i++){
        printf("Enter value of arr[%d]: ", i);
        scanf("%d",&arr[i]);
    }

    int find;
    printf("Enter value you want to search: ");
    scanf("%d", &find);

    search(find,size,arr);
    return 0;
}

void search(int f, int size, int *array){
    int i;
    for(i=0;i<size;i++)
    {
        if(f == array[i]){
            printf("\nFound at index %d and memory address is: %x\n",i,&array[i]);
        }
    }
}

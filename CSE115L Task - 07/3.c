#include<stdio.h>
void search(int arr[], int size, int key);
int main()
{
    int size;
    printf("Enter array size: ");
    scanf("%d",&size);

    int arr[size];

    printf("Array elements:\n");
    for(int i=0;i<size;i++){
        scanf("%d",&arr[i]);
    }

    int key;
    printf("Search Key: ");
    scanf("%d",&key);

    search(arr,size,key);
    return 0;
}
void search(int arr[], int size, int key)
{
    int flag = 0;

    for(int i=0;i<size;i++){
        if(arr[i]==key)
        {
            flag = 1;
            break;
        }
    }

    if(flag==1){
        printf("Found");
    }
    else{
        printf("Not found");
    }
}

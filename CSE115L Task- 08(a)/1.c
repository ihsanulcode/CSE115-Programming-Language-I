#include<stdio.h>
int countSearchKey(int arr[], int size, int key);
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

    int count = countSearchKey(arr,size,key);
    printf("Search Key appears %d times",count);
    return 0;
}
int countSearchKey(int arr[], int size, int key)
{
    int count = 0;
    for(int i=0;i<size;i++){
        if(arr[i]==key)
        {
            count++;
        }
    }

    return count;

}

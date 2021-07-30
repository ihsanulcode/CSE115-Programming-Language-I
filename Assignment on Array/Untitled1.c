//CODE 6
#include<stdio.h>
void find(int size)
{
    int arr[size]; //declaring array with size

    //getting elements
    for(int i=0;i<size;i++)
    {
        printf("Element %d: ",i+1);
        scanf("%d",&arr[i]);
    }

    //calculation
    int temp;
    for(int i=0;i<size-1;i++)
    {
        for(int j=0;j<size-1;j++)
        {
            if(arr[j]>arr[j+1])
            {
                temp=arr[j];
                arr[j]=arr[j+1];
                arr[j+1]=temp;
            }
        }
    }
   printf("Top three largest elements are: %d,%d,%d",arr[size-1],arr[size-2],arr[size-3]);
}
int main()
{
    int n;
    printf("Enter array size: ");
    scanf("%d",&n); //getting array size

    //checking if array size is minimum 3 or not
    if(n<3){
        printf("\nArray size have to be minimum 3 or greater!\n");
    }
    else{
        find(n); // calling function to find th result
    }

   return 0;
}

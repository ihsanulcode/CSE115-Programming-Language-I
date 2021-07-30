#include<stdio.h>
#define NOT_FOUND -1
int search();

int main(void)
{
    int find,result;

    int arr[5] = {100,200,300,400,500};
    printf("Enter the ID you want to find: ");
    scanf("%d",&find);

    result = search(arr,find,5);
    printf("\nResult: %d",result);
    return 0;
}
int search(int hello[], int target , int n)
{
    int i=0,found=0,match;
    while(!found && i<n)
    {
        if(hello[i] == target)
        {
            found = 1;
        }
        else{
            i++;
        }
    }
    if(found = 1)
    {
        match = i;
    }
    else{
        match = NOT_FOUND;
    }
    return match;
}

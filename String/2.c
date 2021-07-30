#include<stdio.h>
void search(char arr[],char key)
{
    int i = 0,flag = 0;
    while(arr[i]!='\0'){
        if(arr[i]==key){
            printf("Found");
            flag = 1;
            break;
        }
        i++;
    }
    if(flag==0)
        printf("Not found");
}
int main()
{
    char string[1000]; //declaring string
    printf("Enter string: ");
    scanf("%[^\n]s",&string); //scanning string with space
    fflush(stdin);

    char key;
    printf("Search key: ");
    scanf("%c",&key); //scanning key

    search(string,key); //passing into function

    return 0;
}

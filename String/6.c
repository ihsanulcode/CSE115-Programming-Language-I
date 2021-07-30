#include<stdio.h>
void Replace(char arr[],char oldchar,char newchar)
{
    int i = 0;
    while(arr[i]!='\0'){
        if(arr[i]==oldchar){
            arr[i] = newchar; //assigning new into old index
        }
        i++;
    }

    int j = 0;
    printf("Modified string: ");
    while(arr[j]!='\0'){
        printf("%c",arr[j]); //printing
        j++;
    }

}
int main()
{
    char string[1000]; //declaring string
    printf("Enter string: ");
    scanf("%[^\n]s",&string); //scanning string with space
    fflush(stdin);

    char oldchar,newchar;
    printf("Old char: ");
    scanf("%c",&oldchar);
    fflush(stdin);

    printf("New char: ");
    scanf("%c",&newchar);
    fflush(stdin);

    Replace(string,oldchar,newchar); //passing into function

    return 0;
}



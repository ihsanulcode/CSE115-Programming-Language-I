#include<stdio.h>
void reverse(char arr[])
{
    int i = 0;
    while(arr[i]!='\0'){
        i++; //counting length
    }

    int j = 0;
    printf("Reverse order: ");
    while(arr[j]!='\0'){
        printf("%c",arr[i-1]); //printing reverse
        i--;
        j++;
    }
}
int main()
{
    char string[1000]; //declaring string
    printf("Enter string: ");
    scanf("%[^\n]s",&string); //scanning string with space

    reverse(string); //passing into function

    return 0;
}


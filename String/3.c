#include<stdio.h>
void count(char arr[])
{
    int i = 0,vowels = 0,con = 0;
    while(arr[i]!='\0'){
        if(arr[i]=='A'||arr[i]=='E'||arr[i]=='I'||arr[i]=='O'||arr[i]=='U'||
           arr[i]=='a'||arr[i]=='e'||arr[i]=='i'||arr[i]=='o'||arr[i]=='u'){ //statement

            vowels++; //counting vowels
        }
        else{
            con++; //counting consonants
        }
        i++;
    }
    printf("Vowels: %d\nConsonants: %d",vowels,con);
}
int main()
{
    char string[1000]; //declaring string
    printf("Enter string: ");
    scanf("%[^\n]s",&string); //scanning string with space

    count(string); //passing into function

    return 0;
}


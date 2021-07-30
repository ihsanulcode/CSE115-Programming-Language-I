#include<stdio.h>
int main()
{
    char s[1000];
    printf("Enter string: ");
    scanf("%[^\n]s",&s);

    int i = 0;
    while(s[i]!='\0'){
        i++;
    }
    printf("Length: %d",i);
    return 0;
}

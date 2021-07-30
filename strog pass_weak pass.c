#include <stdio.h>
#include <string.h>
int main()
{
    char firstName[100];
    char lastName[100];
    char password[100];
    char special[] = {'@', '#','!','~','$','%','^',
                '&','*','(',',','-','+','/',
                ':','.',',','<','>','?','|'};

    char number[] = { '1', '2', '3', '4', '5', '6', '7', '8', '9', '0' };

    int i, j, hasFirst=0, hasLast=0;
    printf("First name: ");
    gets(firstName);
    fflush(stdin);

    printf("Last name: ");
    gets(lastName);
    fflush(stdin);

    printf("Pass: ");
    gets(password);
    fflush(stdin);

    int first = strlen(firstName);
    int last = strlen(lastName);
    int pass = strlen(password);

    if((strstr(password, firstName))!=NULL){
            printf("Weak password");
            return 0;
    }
    if((strstr(password, lastName))!=NULL){
            printf("Weak password");
            return 0;
    }
    if((strstr(password, strcat(firstName, lastName)))!=NULL){
            printf("Weak password");
            return 0;
    }
    for(i = 0; i<pass; i++){
        for(j = 0; j<strlen(special); j++){
            if(password[i] == special[j]){
                hasFirst = 1;
                break;
            }
    }
    if(hasFirst){
        break;
    }
    }

    for(i = 0; i<pass; i++){
        for(j = 0; j<strlen(number); j++){
            if(password[i] == number[j]){
                hasLast = 1;
                break;
                }
        }
        if(hasLast){
            break;
        }
    }

    if(hasFirst == 1 && hasLast == 1){
        printf("\nStrong Password");
    }
    else{
        printf("\nWeak password");
    }

    return 0;

}

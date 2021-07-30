#include<stdio.h>
struct Book_info{
    char name[1000];
    int id;
    float pprice;
}b[60];
void price_incr(struct Book_info b[])
{
    for(int i=0;i<60;i++){
        if(i%2==0){
            b[i].pprice = b[i].pprice*2.0;
        }
        else{
            b[i].pprice = b[i].pprice+(b[i].pprice*0.1);
        }
    }

    printf("\n\n----- Information Dashboard -----\n\n");
    for(int i=0;i<60;i++){
        printf("\tBook %d.\n",i+1);
        printf("\tName: ");
        puts(b[i].name);
        printf("\n\n");
    }

    float totalp = 0.0;
    for(int i=0;i<60;i++){
        totalp += b[i].pprice;
    }
    printf("\nTotal price of all the books: %f\n",totalp);
}
int main()
{
    printf("----- Enter Books Information -----\n\n");
    for(int i=0;i<60;i++){
        printf("\tBook %d.\n",i+1);
        printf("\tName: ");
        fflush(stdin);
        gets(b[i].name);
        printf("\tID: ");
        fflush(stdin);
        scanf("%d",&b[i].id);
        printf("\tPresent Price: ");
        fflush(stdin);
        scanf("%f",&b[i].pprice);
        fflush(stdin);
        printf("\n");
    }

    price_incr(b);

    //FILE
    FILE *fptr;
    fptr = fopen("Shop_Database.txt","w");

    if(fptr == NULL){
        printf("FILE opening unsuccessful!");
        exit(0);
    }

    for(int i=0;i<60;i++){
        fprintf(fptr,"\tBook %d.\n",i+1);
        fprintf(fptr,"\tName: %s\n",b[i].name);
        fprintf(fptr,"\tNew price : %f\n",b[i].pprice);
        fprintf(fptr,"\n");

    }

    fclose(fptr);
    return 0;
}

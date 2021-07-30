#include<stdio.h>
struct student
{
    char name[20];
    int id;
    float cg;
};

int main(void)
{
    int n;
    printf("How many student info you want to store?\n");
    scanf("%d",&n);

    struct student s[n];

    FILE *ptr;
    ptr = fopen("data.txt", "w");
    if(ptr == NULL)
        printf("Error! opening file");

    int i;
    for(i=0;i<n;i++)
    {
        fflush(stdin);
        printf(":::Student #%d\n",i+1);
        printf("Name: ");
        gets(s[i].name);
        printf("ID: ");
        scanf("%d",&s[i].id);
        printf("Cgpa: ");
        scanf("%f",&s[i].cg);
        printf("\n");

        fprintf(ptr,"%s\n%d\n%.2f\n",s[i].name,s[i].id,s[i].cg);

    }
    fclose(ptr);
    ptr = fopen("data.txt", "r");
    printf("\n-----Display-----\n");

    for(i=0;i<n;i++)
    {
        fscanf(ptr,"%s\n%d\n%.2f\n",&s[i].name,&s[i].id,&s[i].cg);
        printf("\n:::Student #%d\n",i+1);
        printf("Name: %s",s[i].name);
        printf("\nID: %d",s[i].id);
        printf("\nCgpa: %.2f\n",s[i].cg);

    }
    fclose(ptr);
}

#include<stdio.h>
struct Employee{
    char name[100];
    int age;
    float basic_salary;
    float total_salary;
    float bonus;
};
void emp_bonus(struct Employee E[])
{
    for(int i=0;i<50;i++){
        if(E[i].age>50){
            E[i].bonus = (E[i].basic_salary*0.4);
            E[i].total_salary = E[i].basic_salary+E[i].bonus;
        }
        else{
            E[i].bonus = (E[i].basic_salary*0.25);
            E[i].total_salary = E[i].basic_salary+E[i].bonus;
        }
    }

    printf("\n\n----- Information Dashboard -----\n\n");
    for(int i=0;i<50;i++){
        printf("\tEmployee %d.\n",i+1);
        printf("\tName: ");
        puts(E[i].name);
        printf("\tTotal Salary: %f",E[i].total_salary);
        printf("\n\n");
    }
}
int main()
{
    struct Employee E[50];

    printf("----- Enter Employee Information -----\n\n");
    for(int i=0;i<50;i++){
        printf("\tEmployee %d.\n",i+1);
        printf("\tName: ");
        fflush(stdin);
        gets(E[i].name);
        printf("\tAge: ");
        fflush(stdin);
        scanf("%d",&E[i].age);
        printf("\tBasic Salary: ");
        fflush(stdin);
        scanf("%f",&E[i].basic_salary);
        fflush(stdin);
        printf("\n");
    }

    emp_bonus(E);

    //FILE
    FILE *fptr;
    fptr = fopen("Employee_Data.txt","w");

    if(fptr == NULL){
        printf("FILE opening unsuccessful!");
        exit(0);
    }

    fprintf(fptr,"\t----- Employee Data -----\n\n");
    for(int i=0;i<50;i++){
        fprintf(fptr,"\tEmployee %d.\n",i+1);
        fprintf(fptr,"\tName: %s\n",E[i].name);
        fprintf(fptr,"\tAge : %d\n",E[i].age);
        fprintf(fptr,"\n");

    }

    fclose(fptr);
    return 0;
}

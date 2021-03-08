#include<stdio.h>
#include<windows.h>
#include<stdlib.h>
#include<string.h>

struct question
{
    char qs[5];

}x[4];

int main ()
{

    printf ("\n\t\t----- Hi there, Please answer some query ----- \n\n");
    char ans[] = "yes";

    printf ("\n\t\tDo you have cough?");
    printf("\n\t\tAns: ");
    gets(x[0].qs);
    printf ("\n\t\tFever?");
    printf("\n\t\tAns: ");
    gets(x[1].qs);
    printf ("\n\t\tAre you Feeling Tiredness?");
    printf("\n\t\tAns: ");
    gets(x[2].qs);
    printf ("\n\t\tShortness of breath?");
    printf("\n\t\tAns: ");
    gets(x[3].qs);

    int i,count = 0;
    for(i=0;i<4;i++)
    {
        if(strcmp(x[i].qs,ans) == 0)
            count++;
    }

    if(count >= 3)
    {
        int j;
        for(j=0; j<50; j++)
        {
          system("color 4");
          printf("\n\t\tEmergency warning signs for COVID-19 get medical attention immediately!\n");
          Sleep(600);
          system("cls");
          Sleep(600);
        }
        getch();
    }


    else
    {
       system("color 2");
       printf("\n\t\tYou are normal,just take care.\n");
    }


    printf("\n\t\t***These symptoms may appear 2-14 days after exposure(based on the incubation period of MERS-CoV viruses)***\n");
    printf("\n\t\t:::: Visit > https://www.who.int/bangladesh/emergencies/coronavirus-disease-(covid-19)-update < for UPDATE!\n");
    printf("\n\t\t----- Thank you! ----- \n\n");

    printf("\n\t\t----------------\n\t\t[1]More info\n\t\t[0]Exit\n\t\t----------------\n\t\tYour choice: ");
    int n;
    scanf("%d",&n);
    switch(n)
    {
        case 0:
            break;
        case 1:
            system("cls");
            printf("\n\t\t----- When to Seek Medical Attention -----\n\n");
            printf("\n\t\t1. Trouble breathing\n\t\t2. Persistent pain or pressure in the chest\n\t\t3. New confusion or inability to arouse\n\t\t4. Bluish lips or face");
            printf("\n\n\t\t:::: Visit > https://www.who.int/bangladesh/emergencies/coronavirus-disease-(covid-19)-update < for UPDATE!\n");
            printf("\n\t\t*** This list is not all inclusive. Please consult your medical provider for any other symptoms that are severe or concerning ***\n\n");
            break;

    }
}

#include <stdio.h>
struct MovieStar{
    char name[1000];
    float rating;
    int TotalFans;
}s[5];
int main()
{
    printf("----- Review -----\n\n");
    for(int i=0;i<5;i++){
        printf("%d.\n",i+1);
        printf("Name: ");
        fflush(stdin);
        gets(s[i].name);
        printf("Rating: ");
        fflush(stdin);
        scanf("%f",&s[i].rating);
        printf("Total Fans: ");
        fflush(stdin);
        scanf("%d",&s[i].TotalFans);
        printf("\n");
    }

    printf("\n----- Display -----\n\n");
    for(int i=0;i<5;i++){
        printf("%d.\n",i+1);
        printf("Name: %s\n",s[i].name);
        printf("Rating: %.2f\n",s[i].rating);
        printf("Total Fans: %d\n",s[i].TotalFans);
        printf("\n");
    }

    return 0;
}

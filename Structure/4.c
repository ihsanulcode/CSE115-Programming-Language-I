#include <stdio.h>
#include <string.h>
#include <stdlib.h>
struct Gamer
{
    int Number_of_favorite_games;
    char  List_of_favorite_games[5][10];
}Gamer[5];
int main()
{
   int n, i,j,k=0,a;
   char games[10][10];

   for(i = 0; i<5; i++){

    printf("Enter information:\n");
    fflush(stdin);
    printf("No of Games: \n");
    scanf("%d",&Gamer[i].Number_of_favorite_games);
     printf("Name of Favorite games: \n");
    for(j=0 ; j<Gamer[i].Number_of_favorite_games ; j++){
      fflush(stdin);
      gets(Gamer[i].List_of_favorite_games[j]);
      strcpy(games[k++],Gamer[i].List_of_favorite_games[j]);
    }

   }
   char temp[10];
   for (i = 0; i < k - 1; i++)
        for (j = 0; j < k - i - 1; j++)
            if (strcmp(games[j], games[j + 1]) > 0) {
                char* temp;
                temp = (char*)calloc(30, sizeof(char));
                strcpy(temp, games[j]);
                strcpy(games[j], games[j + 1]);
                strcpy(games[j + 1], temp);
            }
      int m[100],c=0,c1=0;
      for(i=0 ;i< k ;i++){
            c=0;
        for(j=i ;j<k ;j++){
            if(strcmp(games[i],games[j])==0){
                c++;
            }
        }
        m[c1++]=c;
      }
    int ans=0,flag=m[0];
   for(i=0 ;i<c1 ;i++){
    if(flag<m[i]){
        flag=m[i];
        ans=i;
    }
   }
      printf("Ans: %s\n",games[ans]);
   return 0;
}

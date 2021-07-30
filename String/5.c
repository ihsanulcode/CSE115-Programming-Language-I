#include<stdio.h>
int compare(char str1[],char str2[])
{
    int i = 0;
    while (str1[i]==str2[i]){
    if(str1[i] == '\0' || str2[i] == '\0')
        break;

      i++;
   }

   if (str1[i] == '\0' && str2[i] == '\0')
      return 0;
   else
      return -1;
}
int main()
{
    char string1[1000]; //declaring string
    printf("Enter string: ");
    scanf("%[^\n]s",&string1); //scanning string with space
    fflush(stdin);

    char string2[1000];
    printf("Enter string: ");
    scanf("%[^\n]s",&string2);
    fflush(stdin);

    int ans = compare(string1,string2); //passing into function
    printf("%d",ans);
    return 0;
}


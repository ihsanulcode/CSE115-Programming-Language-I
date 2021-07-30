#include <stdio.h>
#include <stdlib.h>
void saveByDept()
{
   char ch, allstudent[100], target_file[100];
   FILE *deptName, *fileName;

   printf("Enter name of file to copy\n");
   gets(allstudent);

   deptName = fopen(allstudent, "r");

   if( deptName == NULL )
   {
      printf("Press any key to exit...\n");
      exit(EXIT_FAILURE);
   }

   printf("Enter name of target file\n");
   gets(target_file);

   fileName = fopen(target_file, "w");

   if( fileName == NULL )
   {
      fclose(deptName);
      printf("Press any key to exit...\n");
      exit(EXIT_FAILURE);
   }

   while( ( ch = fgetc(deptName) ) != EOF )
      fputc(ch, fileName);

   printf("File copied successfully.\n");

   fclose(deptName);
   fclose(fileName);

   return 0;
}
int main()
{
    saveByDept();
    return 0;

}


#include <stdio.h>
#include <stdlib.h>
struct allStudent {
  int id;
  char name[700];
  float cgpa;
  char dept[300];
};
void pintByDept()
 {
  struct allStudent *deptName;

    int size;

  printf("Number of students: ");
  scanf("%d", &size);
    deptName = (struct allStudent *)calloc(size, sizeof(struct allStudent));
    int i;

    for (i = 0; i < size; ++i)
        {
            printf("Enter Details for no. %d : \n", i+1);
            printf("ID: ");
            scanf("%d", &(deptName + i)->id);
            printf("Name: ");
            scanf("%s", (deptName + i)->name);
            printf("Department: ");
            scanf("%s", (deptName + i)->dept);
            printf("CGPA: ");
            scanf("%f", &(deptName + i)->cgpa);
            printf("\n\n");


        }
     for (i = 0; i < size; ++i)
     {
        printf("Details for student no. %d : \n", i+1);
            printf("ID: %d\t",(deptName + i)->id);
            printf("Name: %s\t",(deptName + i)->name);
            printf("Department: %s\t",(deptName + i)->dept);
            printf("CGPA: %f\t",(deptName + i)->cgpa);
            printf("\n\n");
     }



   free(deptName);
  return 0;
}
int main()
{
    pintByDept();
    return 0;
}

#include<stdio.h>  //problem in \f \v

int main()
{
    int ans;

    printf("\\\\My Details\n\n");
    printf("\tHI! I'm Ihsanul Haque\n");
    printf("\t\"North South University\"");
    printf("\n\tID NO: \'201 3664642\'");
    printf("\n\tDepartment: ECE\bE");
    printf("\n\tMajor: CSE\bE\n");
    printf("\nDo you want to know about my courses\?\n");
    printf("\\\\Type \'1\' for YES");
    printf("  \\\\Type \'0\' for NO\n");
    scanf("%d",&ans);

    if (ans == 1){
        printf("\a\n\nOKAY! My courses are given below:");
        printf("\n\n\t1.\"CSE115\"");
        printf("\n\t2.\"CSE115L\"");
        printf("\n\t3.\"MAT116\"");
        printf("\n\t4.\"ENG102\"\n");
    }
    else{
        printf("\tThank you!\n");
    }

    return 0;

}

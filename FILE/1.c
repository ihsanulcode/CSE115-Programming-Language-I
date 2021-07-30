#include <stdio.h>
#include <stdlib.h>
typedef struct
{
    char name[50];
    int id;
    char dept[20];
    double cgpa;

}student;

int main ()
{
    FILE *infile;
    int x = 0;
	char s1[100];
	char s2[100];
	int id;
	double cg;

    infile = fopen ("input.csv.txt", "r");
    if (infile == NULL)
    {
        fprintf(stderr, "\nError opening file\n");
        exit (1);
    }

    // read file contents till end of file
    while (fscanf(infile,"%[^,],%d,%[^,],%lf",s1,&id,s2,&cg) != EOF)
	{

		printf("%s,%d,%s,%lf",s1,id,s2,cg);
		x++;
	}
	printf("\n");

    fclose (infile);

    return 0;
}

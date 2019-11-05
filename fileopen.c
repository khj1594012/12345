#include "main.h"

void fileopen(){

	char openfile[50];
	struct sInfo *student = malloc(sizeof(struct sInfo));

	printf("enter a file name to open : ");
	scanf("%s", openfile);

	FILE *fp = fopen(openfile, "r");

	if(openfile != NULL){

		fgets(student->name, sizeof(student->name), fp);
		fgets(student->sNum, sizeof(student->sNum), fp);
		fgets(student->dep, sizeof(student->name), fp);

		student->name[strlen(student->name) - 1] = '\0';
		student->dep[strlen(student->dep) - 1] = '\0';

		printf("name : %s\nstudent number : %s\ndepartment : %s\n", student->name, student->sNum, student->dep);

		fclose(fp);
	}
	else
		printf("file does not exist \n");

}

#include "main.h"

void newfile(){

	char filename[30];
	struct sInfo *newstudent = malloc(sizeof(struct sInfo));

	printf("enter a new file name : ");
	scanf("%s", filename);

	FILE *fp = fopen(filename,"w");

	if(filename != NULL){
		printf("\nstudent name : ");
		scanf(" %s", newstudent->name);
		printf("\nstudent number : ");
		scanf(" %s", newstudent->sNum);
		printf("\ndepartment : ");
		scanf(" %s", newstudent->dep);

		//입력 받은 걸 파일에 쓰기..
		fprintf(fp,"%s\n", newstudent->name);
		fprintf(fp,"%s\n", newstudent->sNum);
		fprintf(fp,"%s\n", newstudent->dep);
	}

	else
		printf("file does not exist \n");
	fclose(fp);
}

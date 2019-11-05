#include "main.h"

void filerevision(){

	char refilename[50];
	struct sInfo *restudent = malloc(sizeof(struct sInfo));

	printf("enter a file name to revise : ");
	scanf("%s",refilename);

	FILE *fp = fopen(refilename,"r+");

	if(refilename != NULL){
		printf("\nstudent name : ");
		scanf(" %s", restudent->name);
		printf("\nstudent number : ");
		scanf(" %s", restudent->sNum);
		printf("\ndepartment : ");
		scanf(" %s", restudent->dep);

		fprintf(fp,"%s\n",restudent->name);
		fprintf(fp,"%s\n",restudent->sNum);
		fprintf(fp,"%s\n",restudent->dep);
	}
	else
		printf("file does not exist \n");

	fclose(fp);

}

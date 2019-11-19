#include "main.h"

void filerevision(FILE *fp){

    char refilename[50];
    int num;

	printf("몇개..수정.");
	scanf("%d", &num);

    struct sInfo *restudent = (struct sInfo*)malloc(sizeof(struct sInfo)*num);

	    if(fp != NULL){

			rewind(fp); //맨위로
	        //fprintf(fp,"%d\n", num);

			fseek(fp,sizeof(char)*2,SEEK_CUR);

	        for(int i = 0 ; i < num ; i++){
	            printf("\n%d student name : ", i+1);
	            scanf(" %s", (restudent+i) -> name);
	            printf("\n%d student number : ", i+1);
	            scanf(" %s", (restudent+i) -> sNum);
	            printf("\n%d department : ", i+1);
	            scanf(" %s", (restudent+i) -> dep);

	            fprintf(fp,"%s\n", (restudent+i) -> name);
	            fprintf(fp,"%s\n", (restudent+i) -> sNum);
	            fprintf(fp,"%s\n", (restudent+i) -> dep);
	        }

	    }
	    else
	        printf("file does not exist \n");

	    free(restudent);
}


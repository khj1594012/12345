#include "main.h"

void filerevision(FILE *fp){

    char refilename[50];
    int num = 0;
    struct sInfo *restudent = malloc(sizeof(struct sInfo));

    fscanf(fp,"%d", &num);

    restudent = (struct sInfo*)malloc(sizeof(struct sInfo)*num);

	    if(fp != NULL){
	    	rewind(fp);

	        fprintf(fp,"%d\n",num);

	        for(int i = 0 ; i < num ; i++){
	            printf("\n%d student name : ", i+1);
	            scanf(" %s", (restudent+i) -> name);
	            printf("\n%d student number : ", i+1);
	            scanf(" %s", (restudent+i) -> sNum);
	            printf("\n%d department : ", i+1);
	            scanf(" %s", (restudent+i) -> dep);

	            //ÀÔ·Â ¹ÞÀº °É ÆÄÀÏ¿¡ ¾²±â..
	            fprintf(fp,"%s\n", (restudent+i) -> name);
	            fprintf(fp,"%s\n", (restudent+i) -> sNum);
	            fprintf(fp,"%s\n", (restudent+i) -> dep);
	        }

	    }
	    else
	        printf("file does not exist \n");

}


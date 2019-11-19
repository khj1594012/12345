#include "main.h"

void newfile(){

    char filename[30];
    int num;
    struct sInfo *newstudent;


    printf("enter a new file name : ");
    scanf("%s", filename);

    //strcat / strlen
    FILE *fp = fopen(filename,"w+");

    printf("enter a number of student : ");
    scanf("%d", &num);

    newstudent = (struct sInfo*)malloc(sizeof(struct sInfo)*num);


    if(fp != NULL){

        fprintf(fp,"%d\n",num);

        for(int i = 0 ; i < num ; i++){
            printf("\n%d student name : ", i+1);
            scanf(" %s", (newstudent+i) -> name);
            printf("\n%d student number : ", i+1);
            scanf(" %s", (newstudent+i) -> sNum);
            printf("\n%d department : ", i+1);
            scanf(" %s", (newstudent+i) -> dep);

            //ÀÔ·Â ¹ÞÀº °É ÆÄÀÏ¿¡ ¾²±â..
            fprintf(fp,"%s\n", (newstudent+i) -> name);
            fprintf(fp,"%s\n", (newstudent+i) -> sNum);
            fprintf(fp,"%s\n", (newstudent+i) -> dep);
        }

    }
    else
        printf("file does not exist \n");

    fclose(fp);
}

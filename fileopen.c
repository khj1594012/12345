#include "main.h"


void fileopen(FILE *fp){

    int num;
    struct sInfo *student = malloc(sizeof(struct sInfo));

    int sel;

    while(1){
    	printf("===file open===\n1.read file 2.revise file 3.exit\n");
	    scanf("%d", &sel);

		if(sel == 1){
			rewind(fp); //맨위로
			//읽기
		    fscanf(fp,"%d\n", &num);
		    for(int i = 0 ; i < num ; i++){
				fgets((student+i)->name, 30, fp);

				fgets((student+i)->sNum, sizeof((student+i)->sNum), fp);

				fgets((student+i)->dep, sizeof((student+i)->dep), fp);

				(student+i)->name[strlen((student+i)->name) - 1] = '\0';
				(student+i)->dep[strlen((student+i)->dep) - 1] = '\0';

				printf("name : %s\nstudent number : %s\ndepartment : %s\n", (student+i)->name, (student+i)->sNum, (student+i)->dep);

		    }
		}

		else if(sel == 2){
			filerevision(fp);
		}
		else if(sel == 3)
			break;
		else
			printf("잘못입력");
    }

    free(student);
}

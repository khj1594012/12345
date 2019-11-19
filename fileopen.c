#include "main.h"


void fileopen(FILE *fp){

    int num;
    struct sInfo *student;

    //생성 -> 열람중 1.조회 2. 수정 3.닫기  안열려있으면 1234로
    //열려있는 파일 이름 출력
    //학생수

    int sel;

    while(1){
    	printf("1.read file 2.revise file 3.exit\n");
	    scanf("%d", &sel);

		if(sel == 1){
			//읽기
		}
		else if(sel == 2){
			filerevision(fp);
		}
		else if(sel == 3)
			break;
		else
			printf("d");
    }

/*
    fgets(student->name, sizeof(student->name), fp);
    fgets(student->sNum, sizeof(student->sNum), fp);
    fgets(student->dep, sizeof(student->name), fp);

    student->name[strlen(student->name) - 1] = '\0';
    student->dep[strlen(student->dep) - 1] = '\0';

    printf("name : %s\nstudent number : %s\ndepartment : %s\n", student->name, student->sNum, student->dep);
*/

}

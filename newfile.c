#include "main.h"

void newfile(){

    char filename[30];
    int num;
    struct sInfo *newstudent;


    printf("enter a new file name : ");
    scanf("%s", filename);

    //strcat / strlen
    //입력받은 이름으로 파일생성 >> .txt파일로 만들기 위해 strcat 함수 사용
    FILE *fp = fopen(strcat(filename, ".txt"),"w+");

    printf("enter a number of student : ");
    scanf("%d", &num);
    //sInfo타입의 구조체 동적할당, 학생 수만큼 곱해줌
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

            //newstudent[i]를 포인터로 표현
            fprintf(fp,"%s\n", (newstudent+i) -> name);
            fprintf(fp,"%s\n", (newstudent+i) -> sNum);
            fprintf(fp,"%s\n", (newstudent+i) -> dep);
        }

    }
    else
        printf("file does not exist \n");

    fclose(fp);
}

#include "main.h"

int main(){

	//1.새로운 학생 목록 생성 2.이미있는파일열기
	int select;

	printf("1.새로운 파일 생성  2. 파일 열기 3. 종료\n");

	while(1) {
		scanf("%d", &select);

		if(select == 1){

			//헤더 만들기 main.h
			//함수분리 : 파일 하나 더 만듬 newfile.c : 파일이름입력받고 빈파일생성


		}

		else if(select == 2){



		}

		else if(select == 3){

			printf("종료\n");
			break;
		}

		else
			printf("잘못입력\n");

	}


	getch();

	return 0;
}



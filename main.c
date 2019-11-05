#include "main.h"

int main(){

	int select;

	while(1) {

		printf("1.make new file 2.open a file 3.revise file 4. exit\n");
		scanf("%d", &select);

		if(select == 1){
			newfile();
		}

		else if(select == 2){
			fileopen();
		}
		else if(select == 3){
			filerevision();
		}
		else if(select == 4){
			exit(0);
		}
		else
			printf("잘못 입력\n");

	}
	getch();

	return 0;
}



#include "main.h"

int main(){

	int select;
    char openfile[50];
    FILE *fp;

	while(1) {

		printf("1.make new file 2.open a file 3.exit\n");
		scanf("%d", &select);

		if(select == 1){
			newfile();
		}

		else if(select == 2){
            printf("enter a file name to open : ");
            scanf("%s", openfile);

            fp = fopen(openfile, "r+");
            if(fp != NULL){
                fileopen(fp);
                fclose(fp);
            }
            else
                printf("file does not exist\n");
        }

		else if(select == 3){
            break;
		}
		else
			printf("d");

	}
	getch();

	return 0;
}



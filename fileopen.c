#include "main.h"


void fileopen(FILE *fp){

    int num;
    struct sInfo *student;

    //���� -> ������ 1.��ȸ 2. ���� 3.�ݱ�  �ȿ��������� 1234��
    //�����ִ� ���� �̸� ���
    //�л���

    int sel;

    while(1){
    	printf("1.read file 2.revise file 3.exit\n");
	    scanf("%d", &sel);

		if(sel == 1){
			//�б�
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

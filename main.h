
#ifndef MAIN_H_
#define MAIN_H_

#include<stdio.h>
#include<stdio.h>

struct sInfo{

    char name[30];
    char sNum[30];
    char dep[30];
};

void newfile(void);
void fileopen(FILE *fp);
void filerevision(FILE *fp);



#endif /* MAIN_H_ */

#include <stdio.h>
#include "idpw.h"

extern member user[10];

void file()
{
	FILE* fp;

	if (order == 0) {
		fp = fopen("MemberList.txt", "w");
		if (fp == NULL)
		{
			printf("파일열기 실패");
			exit();
		}
		fprintf(fp, "%s %s %s %d \n", user[0].id, user[0].pw, user[0].name, user[0].age);
	}
	else {
		fp = fopen("MemberList.txt", "a");
		if (fp == NULL)
		{
			printf("파일열기 실패");
			exit();
		}
		fprintf(fp, "%s %s %s %d \n", user[order].id, user[order].pw, user[order].name, user[order].age);
	}

	fclose(fp);

}
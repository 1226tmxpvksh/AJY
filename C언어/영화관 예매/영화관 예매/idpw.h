#ifndef IDPW
#define IDPW

void idpw();
void memberjoin();
void login();

typedef struct member
{
	char id[10];
	char pw[10];
	char name[10];
	int age[10];
}member;

#endif IDPW
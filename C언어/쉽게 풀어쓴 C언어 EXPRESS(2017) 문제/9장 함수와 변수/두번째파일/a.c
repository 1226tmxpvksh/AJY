#include<stdio.h>

int abc(int a);
void y();

int b = 100;
static int c = 101;
static int d = 200;

int abc(int a) {
	printf("%d", a + 3);
}

void y()
{
	d++;


}
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int random();

int main()
{
	printf("%d\n", random());
	printf("%d\n", random());
	printf("%d\n", random());
	printf("%d\n", random());

	return 0;
}

int random() {
	static int inited = 0;
	if (inited == 0) {
		printf("초기화 실행\n");
		srand((unsigned)time(NULL));
		inited++;
		return rand();
	}

	else
		inited++;
		return rand();
}
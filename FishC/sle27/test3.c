#include <stdio.h>

int main()
{
	int num = 202;
	const int cnum = 888;
	int * const p = &num;
	
	printf("*p: %d\n", *p);

	*p = 1024;
	printf("*p: %d\n", *p);

//	p = &cnum;
//	printf("*p: %d\n", *p);

	return 0;

}


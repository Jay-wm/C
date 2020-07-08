#include <stdio.h>

int main()
{
	int num = 202;
	const int cnum = 888;
	const int * const p = &num;	
	const int * const *pp = &p;

	/*
	printf("*p: %d\n", *p);

	*p = 1024;
	printf("*p: %d\n", *p);
	*/

	printf("pp: %p, &p: %p\n", pp, &p);
	printf("*pp: %p, p: %p, &num: %p\n", *pp, p, &num);
	printf("**pp: %d, *p: %d, num: %d\n", **pp, *p, num);

	return 0;

}


#include <stdio.h>

int main()
{
	char a = 'F';
	int b = 123;

	char *pa = &a;
	int *pb = &b;
	
	printf("a = %c\n", *pa);
	printf("b = %d\n", *pb);
	
	*pa = 'C';
	*pb += 1;

	printf("now, a = %c\n", *pa);
	printf("now, f = %d\n", *pb);
	printf("sizeof pa = %d\n", sizeof(pa));
	printf("sizeof pb = %d\n", sizeof(pb));

	printf("the addr of a is:%p\n", pa);
	printf("the addr of b is:%p\n", pb);

	return 0;
}


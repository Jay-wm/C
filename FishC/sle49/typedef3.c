#include <stdio.h>

typedef int integer;

int main(void)
{
	unsigned integer a;
	int b;

	a = -1;
	b = a;

	printf("a = %u, b = %u\n", a, b);
	printf("size of a = %d\n", sizeof(a));
	return 0;
}


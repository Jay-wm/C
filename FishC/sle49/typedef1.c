#include <stdio.h>

#define integer int

int main(void)
{
	integer a;
	int b;

	a = 520;
	b = a;

	printf("a = %d, b = %d\n", a, b);
	printf("size of a = %d\n", sizeof(a));
	return 0;
}


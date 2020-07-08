#include <stdio.h>

typedef int INTEGER;
typedef int *PTRINT;

int main(void)
{
	INTEGER a = 520;
	PTRINT b, c;

	b = &a;
	c = b;
	
	printf("addr a: %p\n", c);

	return 0;
}


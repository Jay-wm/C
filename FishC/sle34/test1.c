#include <stdio.h>

void recursion(void);


void recursion(void)
{
	static int count = 10;
	printf("Hi!\n");

	if (--count)
	{
		recursion();
	}
}

int main()
{
	recursion();

	return 0;
}

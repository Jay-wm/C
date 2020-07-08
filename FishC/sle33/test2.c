#include <stdio.h>

void func(void);

void func()
{
	static int count = 0;
	printf("count = %d\n", count);

	count++;
}

int main()
{
	int i;
	for (i = 0; i < 10; i++)
	{
		func();
	}

	return 0;
}

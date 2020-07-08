#include <stdio.h>

int main()
{
	int i = 520;
	printf("before: i = %d\n", i);

	for (int i = 0; i < 10; i++)
	{
		printf("%d  ", i);
	}

	printf("\n");
	printf("after: i = %d\n", i);

	return 0;
}

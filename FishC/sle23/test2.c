#include <stdio.h>

int main()
{
	int a = 1, b = 2, c = 3, d = 4, e = 5;
	int *p1[5] = {&a, &b, &c, &d, &e};
	int i;
	
	for (i = 0; i < 5; i++)
	{
		printf("%d\n", *p1[i]);
	}

	return 0;
}

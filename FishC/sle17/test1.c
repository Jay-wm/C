#include <stdio.h>
#include <math.h>

/*数组溢出（存储或访问的个数超过数组大小），
 C99标准提供的保护机制，以防止出现大的偏差，之保护一位*/
int main()
{
	int a[11], i;

	for (i = 0; i <= 11; i++)
	{
		a[i] = pow(i, 2);
	}

	for (i = 0; i <= 11; i++)
	{
		printf("%d\n", a[i]);
	}

	return 0;
}


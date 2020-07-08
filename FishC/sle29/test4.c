#include <stdio.h>

void get_array(int a[10]);

void get_array(int a[10])
{
	int i;
	
	a[5] = 55;
	for (i = 0; i < 10; i++)
	{
		printf("a[%d] = %d\n", i, a[i]);
	}

}

int main()
{
	int b[10] = {1, 2, 3, 4, 5, 6, 7 ,8 ,9, 0};
	
	get_array(b);
	
	int i;

	for (i = 0; i < 10; i++)
	{
		printf("b[%d] = %d\n", i, b[i]);

	}

	return 0;
}

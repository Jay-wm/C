#include <stdio.h>
#include <stdlib.h>

int main(void)
{
	int *p1 = NULL;
	int *p2 = NULL;

	p1 = (int *)malloc(sizeof(int));
	p2 = (int *)malloc(sizeof(int));
	
	printf("stack: %p -> %p\n", &p1, &p2);
	printf("heap: %p -> %p\n", p1, p2);

	p1 = (int *)realloc(p1, 20 * sizeof(int));
	printf("heap: %p -> %p\n", p1, p2);

	return 0;

}

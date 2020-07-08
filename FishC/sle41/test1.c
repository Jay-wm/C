#include <stdio.h>

#define STR(s) # s
#define T(x, y) x ## y
int main(void)
{
	printf("%s \n", STR(FISHC));
	printf(STR(Hello       %s num = %d\n), STR(FISHC), 520);
	printf("%d\n", T(52, 0));
	return 0;
}

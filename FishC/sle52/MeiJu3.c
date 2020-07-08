#include <stdio.h>

int main(void)
{
	enum Color {red, green, blue = 10, yellow};//枚举常量无法更改
	enum Color rgb;
	
	printf("red is %d\n", red);
	printf("green is %d\n", green);
	printf("blue is %d\n", blue);
	printf("yellow is %d\n", yellow);


	return 0;
}

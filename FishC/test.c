#include <stdio.h>

int main()
{
	int a = 520;
	char b = 'F';
	float c = 3.14;
	double d = 3.141592653;

	printf("鱼C工作室创建于2010年的%d\n", a);
	printf("I Love %cishC.com!\n", b);
	printf("元周率是：%9.4f.\n", c);
	printf("精确到小数点后9位的元周率是：%11.9f\n", d);

	return 0;
}

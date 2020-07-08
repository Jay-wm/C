#include <stdio.h>

int square(int);

int square(int num)
{
	return num *num;

}

int main()
{
	int num;
	int (*fp)(int);

	printf("请输入一个整数：");
	scanf("%d", &num);

	fp = &square;//或者写成：fp = square, 因为函数名即是一个地址
	printf("%d * %d = %d\n", num, num, (*fp)(num));//也可写成：fp(num),不推荐

	return 0;
}

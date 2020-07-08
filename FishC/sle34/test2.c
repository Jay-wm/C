#include <stdio.h>

long long fact(int num);

long long fact(int num)
{
	long result;

	for (result = 1; num > 1; num--)
	{
		result *= num;
	}
}

int main()
{
	int num;
	printf("请输入一个整数：");
	scanf("%d", &num);

	printf("%d的阶乘是：%d!\n", num, fact(num));

	return 0;
}

#include <stdio.h>

long long fact(int num);

long long fact(int num)
{
	long long result;

	if (num > 0)
	{
		result = num * fact(num - 1);
	}

	else
	{
		result = 1;
	}

	return result;
}

int main()
{
	int num;

	printf("请输入一个整数：");
	scanf("%d", &num);

	printf("%d的阶乘是：%lld!\n", num, fact(num));

	return 0;
}

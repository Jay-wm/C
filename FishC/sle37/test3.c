#include <stdio.h>
#include <stdlib.h>

int main()
{
	int *ptr;
	int num = 123;

	ptr = (int *)malloc(sizeof(int));

	if (ptr == NULL)
	{
		printf("调用失败！");
		exit(1);
	}

	printf("请输入一个整数：");
	scanf("%d", ptr);

	printf("%d\n", *ptr);

	ptr = &num;

	printf("%d\n", *ptr);

	free(ptr);

	return 0;
}

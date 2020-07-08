#include <stdio.h>
#include <stdlib.h>

int main()
{
	int *ptr;

	ptr = (int *)malloc(sizeof(int));

	if (ptr == NULL)
	{
		printf("调用失败！");
		exit(1);
	}

	printf("请输入一个整数：");
	scanf("%d", ptr);

	printf("%d\n", *ptr);

	free(ptr);
	printf("%d\n", *ptr);

	return 0;
}

#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int main(void)
{
	int i, num;
	int count = 0;
	int *ptr = NULL;//注意：这里必须初始化为NULL

	do
	{
		printf("请输入一个整数（输入-1表示结束）：");
		scanf("%d", &num);
		count++;

		ptr = (int *)realloc(ptr, count * sizeof(int));

		if (ptr == NULL)
		{
			exit(1);
		}

		ptr[count-1] = num;
	} while(num != -1);

	printf("输入的整数分别是：");

	for (i = 0; i < count - 1; i++)
	{
		printf("%d ", ptr[i]);
	}
	
	free(ptr);
	printf("\n");

	return 0;
}



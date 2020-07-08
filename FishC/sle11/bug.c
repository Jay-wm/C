#include <stdio.h>

int main()
{
	char isRain, isFree;

	printf("是否有空？{Y/N}");
	scanf("%c", &isFree);

	getchar();

	printf("是否下雨？(Y/N)");
	scanf("%c", &isRain);

	if (isFree == 'Y')
	{
		if (isRain == 'N')
		{
			printf("祝999！\n");
		}
		else if (isRain == 'Y')
		{
			printf("记得带伞哟！^_^\n");
		}
	}
	else
	{
		printf("女神没空T_T\n");
	}

	return 0;
}


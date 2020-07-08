#include <stdio.h>

int main()
{
	char *cBooks[] = {
		"《C语言程序设计》",
		"《C鱼》",
		"《python》",
		"《语文》"
		};
	char **byFishC;
	char **jiayuLoves[4];
	int i;

	byFishC = &cBooks[0];
	jiayuLoves[0] = &cBooks[0];
	jiayuLoves[1] = &cBooks[1];
	jiayuLoves[2] = &cBooks[2];
	jiayuLoves[3] = &cBooks[3];

	printf("FishC出版的书有：%s\n", *byFishC);
	printf("小甲鱼喜欢的书：\n");

	for (i = 0; i < 4; i++)
	{
		printf("%s", *jiayuLoves[i]);
	}

	printf("\n");
	return 0;
}

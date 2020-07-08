#include <stdio.h>
#include <stdlib.h>
#define MAX 1024

int main(void)
{
	FILE *fp;
	char buffer[MAX];

	if ((fp = fopen("lines.txt", "w")) == NULL)
	{
		printf("打开文件失败！\n");
		exit(EXIT_FAILURE);
	}

	fputs("Line one: Hello World!\n", fp);
	fputs("Line two: Hello FishC!\n", fp);
	fputs("Line three: I love fishc.com!\n", fp);

	fclose(fp);

	if ((fp = fopen("lines.txt", "r")) == NULL)
	{
		printf("打开文件失败！\n");
		exit(EXIT_FAILURE);
	}

	while(!feof(fp))
	{
		fgets(buffer, MAX, fp);
		printf("%s", buffer);
	}

	return 0;

}

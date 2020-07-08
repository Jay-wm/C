#include <stdio.h>
#include <stdlib.h>

int main(void)
{
	FILE *fp;

	if((fp = fopen("output.txt", "w")) == NULL)
	{
		perror("打开文件失败，原因是\n");
		exit(EXIT_FAILURE);
	}

	fputs("I love FishC.com!\n", fp);
	getchar();

	fclose(fp);
	return 0;
}

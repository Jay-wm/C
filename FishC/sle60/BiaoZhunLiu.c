#include <stdio.h>
#include <stdlib.h>

int main(void)
{
	FILE *fp;
	
	if((fp = fopen("Nofile.txt", "r")) == NULL)
	{
		printf("标准输出！\n");
		fputs("打开文件失败！\n", stderr);
		exit(EXIT_FAILURE);
	}

	//do nothing
	fclose(fp);

	return 0;
}

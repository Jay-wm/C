#include <stdio.h>
#include <stdlib.h>
#include <errno.h>

int main(void)
{
	FILE *fp;

	if((fp = fopen("noFile.txt", "r")) == NULL)
	{
		perror("打开文件失败，原因是：");//直观打印错误原因，该函数在标准输入输出库中<stdio.h>
		fprintf(stderr, "出错了，原因是 -> %s <-这个！\n", strerror(errno));
		//strerror函数直接返回错误码对应的错误信息，即可以在特定位置打印错误信息，该函数在库<errno.h>中
		exit(EXIT_FAILURE);
	}

	fclose(fp);

	return 0;
}

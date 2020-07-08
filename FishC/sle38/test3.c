#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(void)
{
	int *prt1 = NULL;
	int *prt2 = NULL;

	//第一次申请的内存空间
	prt1 = (int *)malloc(10 * sizeof(int));

	//运行若干次操作后发现prt1的内存空间不够用
	//第二次申请的内存空间
	prt2 = (int *)malloc(20 * sizeof(int));
	
	//将prt1的数据拷贝到prt2
	memcpy(prt2, prt1, 10);
	free(prt1);

	//对prt2申请的空间进行若干操作。。。
	free(prt2);

	return 0;
}

#include <stdio.h>
#include <string.h>

int main()
{
	char str1[] = "I love", str2[] = " qingbao^_^";
	char str3[] = "I love", str4[] = " qingbao^_^";

	strcat(str1, str2);//拼接字符串
	strncat(str3, str4, 8);/*拼接与拷贝不同，拼接会自动
	在后面添加结束字符'\0'*/
	printf("str1: %s\n", str1);
	printf("str3: %s\n", str3);

	return 0;
}


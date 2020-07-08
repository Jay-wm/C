#include <stdio.h>
#include <string.h>

int main()
{
	char str[] = "I love fishc.com!", str1[30] = "I love qingbao^_^",
	     str2[] = "I know you are", str3[100];

	//str2[] = str1[];
	strcpy(str1, str2);
	strcpy(str3, "Copy successful");

	printf("sizeof str = %d\n", sizeof(str));//计算数组的长度
	printf("strlen str= %u\n", strlen(str));//计算字符串的长度
	printf("str1: %s\n", str1);
	printf("str2: %s\n", str2);
	printf("str3: %s\n", str3);
	//printf("str2[] is:%s", str2[]);

	return 0;
}


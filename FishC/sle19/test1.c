#include <stdio.h>
#include <string.h>

int main()
{
	char str[] = "I love fishc.com!", str1[30] = "I love qingbao^_^",
	     str2[] = "I know you are", str3[100], str4[11];

	//str2[] = str1[];
	strcpy(str1, str2);//复制字符串，第一种方法strcpy()
	strcpy(str3, "Copy successful");
	strncpy(str4, str2, 10);//复制字符串，第二种方法strncpy
	str4[10] = '\0';//不手动加结束字符，打印出来的结果会出现乱码

	printf("sizeof str = %d\n", sizeof(str));//计算数组的长度
	printf("strlen str= %u\n", strlen(str));//计算字符串的长度
	printf("str1: %s\n", str1);
	printf("str2: %s\n", str2);
	printf("str3: %s\n", str3);
	printf("str4: %s\n", str4);
	//printf("str2[] is:%s", str2[]);

	return 0;
}


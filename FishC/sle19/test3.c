#include <stdio.h>
#include <string.h>

int main()
{
	char str1[] = "I love", str2[] = "I love";
	char str3[] = "I love qingb", str4[] = "I love qingbao^_^";
	if (!strcmp(str1, str2))
	{
		printf("两个字符串完全一致！\n");
	}
	else
	{
		printf("两个字符串存在差异！\n");
	}

	if (!strncmp(str3, str4, 14))//比较前n个字符是否一致
	{
		printf("两个字符串完全一致！\n");
	}
	else
        {
                printf("两个字符串存在差异！\n");
	}

	return 0;
}


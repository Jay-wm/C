#include <stdio.h>

int main()
{
	char str[] = "I love fishc.com!";
	char *target = str;
	int count = 0;
	while (*target++ != '\0')
	{
		count++;
	}

	printf("总共有%d个字符\n", count);
	return 0;
}



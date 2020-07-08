#include <stdio.h>

//指针数组，是一个数组
int main()
{
	char *p1[5] = 
	{
		"I love fishc.com!", 
		"just do", 
		"Nothing is impossible", 
		"I love qingbao", 
		"forever"
	};
	int i;
	
	for (i = 0; i < 5; i++)
	{
		printf("%s\n", p1[i]);
	}

	return 0;
}

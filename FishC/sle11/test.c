#include <stdio.h>

int main()
{
	char code;

	printf("请输入你的成绩：");
	scanf("%c", &code);

	switch (code)
	{
		case 'A': printf("你的成绩在90分以上！\n"); break;
		case 'B': printf("你的成绩在80~90分之间！\n"); break;
		case 'C': printf("你的成绩在70~80分之间！\n"); break;
		case 'D': printf("你的成绩在60~70分之间！\n"); break;
		case 'E': printf("你的成绩在60分以下！\n"); break;
		default: printf("请输入有效成绩评级\n"); break;
	}

	return 0;
}

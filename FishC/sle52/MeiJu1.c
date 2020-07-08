#include <stdio.h>
#include <time.h>

int main(void)
{
	enum Week {sun, mon, tue, wed, thu, fri, sat};//sun、mon...是枚举常量，类似于宏定义，不同的是：值是整型，默认从0开始，可以不从零开始，请看下一个例子
	enum Week today;//today是枚举变量
	struct tm *p;
	time_t t;

	time(&t);
	p = localtime(&t);

	today = p->tm_wday;
	switch(today)
	{
		case mon:
		case tue:
		case wed:
		case thu:
		case fri:
			printf("干活！\n");
			break;
		case sat:
		case sun:
			printf("休息！\n");
			break;
		default:
			printf("Error\n");
	}

	return 0;
}

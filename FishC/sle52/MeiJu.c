#include <stdio.h>
#include <time.h>

#define SUN 0
#define MON 1
#define TUE 2
#define WED 3
#define THU 4
#define FRI 5
#define SAT 6

int main(void)
{
	struct tm *p;
	time_t t;

	time(&t);//或者写成：t = time(NULL);t等于从1970年1月1日的UTC时间0时0分0秒算起到现在所经过的秒数，即函数time返回值
	p = localtime(&t);

	switch(p->tm_wday)
	{
		case MON:
		case TUE:
		case WED:
		case THU:
		case FRI:
			printf("干活！T_T\n");
			break;
		case SAT:
		case SUN:
			printf("放假！^_^\n");
			break;
		default:
			printf("Error!\n");
	}

	return 0;

}

/*
	1、time 函数文档
	 
	 
	  函数摘要：
	 
	  time 函数用于返回从标准计时点到当前时间的秒数，即从 1970 年 1 月 1 日的 UTC 时间 0 时 0 分 0 秒算起到现在所经过的秒数。
	 
	 
	  函数原型：
	 
	  小甲鱼温馨提示：time_t 事实上是一个 32 位的整型变量。
	  #include <time.h>
	  ...
	  time_t time(time_t t);
	 
	 
	  参数解析：
	 
	  参数含义 time_t
	  1. 一个指向 time_t 类型变量的指针，用于存放获得的结果
	  2. 可以将该参数指定为 NULL，通过函数的返回值获得结果
	  
	  返回值：
	 
	  如果函数调用成功，返回值是标准计时点到当前时间所经过的秒数；
	 
	  如果函数调用失败，返回值是 -1，并设置 erron
	 
	2、localtime -- 获取当前的本地时间和日期
	 
	 
	  函数摘要：
	 
	  localtime 函数用于获取当前的本地时间和日期。
	 
	  其实 localtime 函数是将一个 time_t 类型的值转换成具体的本地时间和日期，所以需要先使用 time 函数来返回表示当前时间的 time_t
	 
	 
	  小甲鱼科普
	 
	  UTC：整个地球分为二十四时区，每个时区都有自己的本地时间。在国际无线电通信场合，为了统一起见，使用一个统一的时间，称为通用协          调时（UTC，Universal Time Coordinated）。UTC 与格林尼治平均时（GMT, Greenwich Mean Time）一样，都与英国伦敦的本地时相同。
	 
	  本地时间：北京时间所采取的时区是东八区，即比 UTC 快 8 小时，所以如果 UTC 时间是 13:00，则北京时间应该是 21:00。
	 
	  函数原型：
	 
	  #include <time.h>
	  ...
	  struct tm gmtime(const time_t timep);
	  复制代码
	 
	 
	  参数解析：
	 
	  参数	含义
	  timep	1. 指向 time_t 类型的指针
	 
	  2. 请使用 time 函数获取该指针需要指向的值
	 
	 
	  返回值：
	 
	  返回值是一个指向 tm 结构体的指针。
	 
	  tm 结构体包含了当地时间和日期：
	 
	  struct tm
	  {
	  	int tm_sec;     / 秒，范围为 0~59，60 的话表示闰秒 
           	int tm_min;     / 分，范围是 0~59 
	        int tm_hour;    / 时，范围是 0~23 
	 	int tm_mday;    / 一个月中的第几天，范围是 1~31 
	 	int tm_mon;     / 一年中的第几个月，范围是 0~11
	 	int tm_year;    / 自 1900 年往后的第几年 
	 	int tm_wday;    / 星期几，自星期天开始计算，范围是 0~6 
	 	int tm_yday;    / 一年中的第几天，范围是 0~365 
	 	int tm_isdst;   / 指定日光节约时间是否生效，正数表示生效，0 表示不生效，负数表示该信息不可用
          };
 */

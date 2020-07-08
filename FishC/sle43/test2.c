#include <stdio.h>

struct Date
{
	int year;
	int month;
	int day;
};

struct Book
{
	char title[128];
	char author[40];
	float price;
	struct Date date;
	char publisher[40];
}book = 
{
	"《带你学习带你飞》",
	"小甲鱼",
	48.8,
	{2017, 11, 11},
	"清华大学出版射"
};

int main(void)
{
	struct Book *pt;
	pt = &book;

	printf("书名：%s  作者：%s  售价：%.2f\n", pt->title, pt->author, pt->price);
	printf("出版日期：%d-%d-%d  出版社：%s\n", pt->date.year, pt->date.month, pt->date.day, pt->publisher);

	return 0;
}


#include <stdio.h>
#include <string.h>
#include <stdlib.h>

struct Date
{
	int year;
	int month;
	int day;
};

struct Book
{
	char name[40];
	char author[40];
	char publisher[40];
	struct Date date;
};


int main(void)
{
	FILE *fp;
	struct Book *book_w, *book_r;
	book_w = (struct Book *)malloc(sizeof(struct Book));
	book_r = (struct Book *)malloc(sizeof(struct Book));
	if(book_w == NULL || book_r == NULL)
	{
		printf("内存分配失败！\n");
		exit(EXIT_FAILURE);
	}

	strcpy(book_w->name, "《带你学习带你飞》");
	strcpy(book_w->author, "小甲鱼");
	strcpy(book_w->publisher, "清华大学出版社");
	book_w->date.year = 2017;
	book_w->date.month = 11;
	book_w->date.day = 11;

	if ((fp = fopen("library.txt", "w")) == NULL)
	{
		printf("打开文件失败！\n");
		exit(EXIT_FAILURE);
	}
	
	fwrite(book_w, sizeof(struct Book), 1, fp);

	fclose(fp);

	if ((fp = fopen("library.txt", "r")) == NULL)
	{
		printf("打开文件失败！\n");
		exit(EXIT_FAILURE);
	}
	
	fread(book_r, sizeof(struct Book), 1, fp);
	printf("书名：%s\n", book_r->name);
	printf("作者：%s\n", book_r->author);
	printf("出版社：%s\n", book_r->publisher);
	printf("出版日期：%d-%d-%d\n", book_r->date.year, book_r->date.month, book_r->date.day);


	return 0;
}


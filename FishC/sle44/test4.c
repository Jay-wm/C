#include <stdio.h>
#include <stdlib.h>

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
};

void getInput(struct Book *book);
void getInput(struct Book *book)
{
	printf("请输入书名：");
	scanf("%s", book->title);
	printf("请输入作者：");
	scanf("%s", book->author);
	printf("请输入售价：");
	scanf("%f", &book->price);
	printf("请输入出版日期：");
	scanf("%d-%d-%d", &book->date.year, &book->date.month, &book->date.day);
	printf("请输入出版社：");
	scanf("%s", book->publisher);

};


void printfBook(struct Book *book);
void printfBook(struct Book *book)
{
	printf("书名:%s\n作者:%s\n售价:%.2f\n", book->title, book->author, book->price);
        printf("出版日期:%d-%d-%d\n出版社:%s\n", book->date.year, book->date.month, book->date.day, book->publisher);
}

int main(void)
{
	struct Book *b1, *b2;
	b1 = (struct Book *)malloc(sizeof(struct Book));
	b2 = (struct Book *)malloc(sizeof(struct Book));
	if (b1 == NULL || b2 == NULL)
	{
		printf("内存分配失败！\n");
		exit(1);
	}

	printf("请录取第一本书的信息：\n");
	getInput(b1);
	putchar('\n');

	printf("请录取第二本书的信息：\n");
	getInput(b2);
	putchar('\n');

	printf("打印第一本书信息：\n");
	printfBook(b1);
	putchar('\n');

	printf("打印第二本书信息：\n");
	printfBook(b2);
	putchar('\n');
	
	free(b1);
	free(b2);

	return 0;
}


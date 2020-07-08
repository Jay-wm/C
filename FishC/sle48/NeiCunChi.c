#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define MAX 1024

struct Lin
{
	char name[30];
        char number[20];
	struct Lin *next;
} *han = NULL;

struct Lin *pool = NULL;
int count;

void ching(struct Lin *hand);
int recu(int i, struct Lin rea, char a[]);
void addperson(struct Lin **hand);
void findperson(struct Lin *hand);
void chingperson(struct Lin *hand);
void delperson(struct Lin **hand);
void displaycontacs(struct Lin *hand);
void freeper(struct Lin **hand);
void releasePool(void);

int main(void)
{
	int num = 0;
	while (num != 6)
	{
		putchar('\n');
		printf("请输入命令：\n.....||1（添加新的联系人）  ||.....\n.....||2：（查找联系人）    ||.....\n.....||3：（更改联系人）    ||.....\n.....||4：（删除联系人）    ||.....\n.....||5：（查看所有联系人）||....\n.....||6：（退出）          ||.....\n");
		scanf("%d", &num);
		switch (num)
		{
			case 1: addperson(&han); break;
			case 2: findperson(han); break;
			case 3: chingperson(han); break;
			case 4: delperson(&han); break;
			case 5: displaycontacs(han); break;
		}
	}
	freeper(&han);
	releasePool();
}


void ching( struct Lin *hand)
{
	int num;
	while (1)
	{
		printf("输入1，改写名字\n输入2，改写号码\n输入-1，退出改写程序");
		scanf("%d", &num);
		switch (num)
		{
			case 1: printf("请输入名字："); scanf("%s", hand->name, 30);
			case 2: printf("请输入号码："); scanf("%s", hand->number, 20);
			default:printf("输入错误，请重新输入：");
			case -1: break;
		}
	}
}

int recu(int i, struct Lin rea, char a[])
{
	int z;
	do
	{
		z = a[i] - rea.name[i];
		i++;
		if (z)
		{														                        break;
		}
	} while(rea.name[i] != '\0');
	if (rea.name[i] != '\0')
	{
		return -1;
	}
	return 0;
}

void addperson(struct Lin ** hand)
{
	struct Lin *adper;
	
	//如果内存池
	if (pool != NULL)
	{
		adper = pool;
		pool = pool->next;
		count--;
	}
	else
	{
		adper = (struct Lin *)malloc(sizeof(struct Lin));
		if (adper == NULL)
		{
			printf("分配内存失败!");
			exit(1);
		}
	}

	printf("请输入联系人的名字\n：");
	scanf("%s", adper->name,30);
	printf("请输入电话号码\n");
	scanf("%s", adper->number,20);
	if (*hand == NULL)
	{
		*hand = adper;
		adper->next = NULL;
	}
	else
	{
		adper->next = *hand;
		*hand = adper;
	}
}

void findperson(struct Lin * hand)
{
	int num;
	char a[30];
	printf("请输入名字：\n");
	scanf("%s", a, 30);
	while(1)
	{
		num = recu(0, *hand, a);
		if (num == 0)
		{
			break;
		}
		hand = hand->next;
		if (hand == NULL)
		{
			printf("抱歉，本通讯录没有此人\n");
			break;
		}
	}
	if (hand != NULL)
	{
		printf("你要找的%s的电话号码是%s\n", hand->name, hand->number);
	}
}

void chingperson(struct Lin * hand)
{
	int num;
	char a[30];
	printf("请输入名字：");
	scanf("%s", a, 30);
	while (1)
	{
		num = recu(0, *hand, a);
		if (num == 0)
		{
			break;
		}
		hand = hand->next;
		if (hand == NULL)
		{
			printf("抱歉，本通讯录没有此人\n");
			break;
		}
	}
	if (hand != NULL)
	{
		ching(hand);
	}
	printf("请确认：");
	printf("姓名：%s",hand->name);
	printf("号码：%s\n",hand->number);
}

void delperson(struct Lin ** hand)
{
	int num;
	struct Lin *temp;
	struct Lin *chin;
	chin = *hand;
	struct Lin *nx;
	nx = NULL;
	char a[30];
	printf("请输入名字：\n");
	scanf("%s", a, 30);
	while (1)
	{
		num = recu(0, *chin, a);
		if (num == 0)
		{
			break;
		}
		nx = chin;
		chin = chin->next;
		if (hand == NULL)
		{
			printf("抱歉，本通讯录没有此人\n");
			break;
		}
	}
	if (chin == *hand)
	{
		*hand = chin->next;
		free(chin);
	}
	else
	{
		nx->next = chin->next;

		if(count < MAX)
		{
			if (pool != NULL)
			{
				temp = pool;
				pool = chin;
				chin->next = temp;
			}
			else
			{
				pool = chin;
				chin->next = NULL;
			}
			count++;
		}
		else
		{
			free(chin);
		}
	}
}

void displaycontacs(struct Lin * hand)
{
	printf("开始打印全部成分：\n");
	while (hand != NULL)
	{
		printf("联系人：%s\n", hand->name);
		printf("电话：%s\n", hand->number);
		printf("====================================");
		putchar('\n');
		hand = hand->next;
	}
	printf("打印结束\n");
}

void freeper(struct Lin ** hand)
{
	struct Lin *h;
	struct Lin *n;
	h = *hand;
	*hand = NULL;
	while (h != NULL)
	{
		n = h->next;
		free(h);
		h = n;
	}
	exit(1);
}

void releasePool(void)
{
	struct Lin *temp;

	while(pool != NULL)
	{
		temp = pool;
		pool = pool->next;
		free(temp);
	}
}

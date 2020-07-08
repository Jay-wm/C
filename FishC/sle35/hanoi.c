#include <stdio.h>

int count = 0;

void hanoi(int n, char x, char y, char z);

void hanoi(int n, char x, char y, char z)
{
	if (n == 1)
	{
		//printf("%c --> %c\n", x, z);
		count ++;
	}
	else
	{
		hanoi(n-1, x, z, y);
		//printf("%c --> %c\n", x, z);
		hanoi(n-1, y, x, z);
		count++;
	}
}
int main()
{
	int n;

	printf("请输入汉诺塔的层数：");
	scanf("%d", &n);

	printf("计算中...\n");
	hanoi(n, 'X', 'Y', 'Z');
	printf("%d\n", count);

	return 0;
}

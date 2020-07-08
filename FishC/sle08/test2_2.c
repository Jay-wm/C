#include <stdio.h>

int main()
{
       	char a[6] = {'F', 'i', 's', 'h', 'C', '\0'};
	char b[] = {'F', 'i', 's', 'h', 'C', '\0'};
	char c[] = {"FishC"};
	char d[] = "FishC";

	printf("字符串不会出现乱码的命名方法:\n");
	printf("第一种方法%s。\n", a);
	printf("第二种方法%s。\n", b);
	printf("第三种方法%s。\n", c);
	printf("第四种方法%s。\n", d);
	printf("Hello World!\n");

	return 0;
}


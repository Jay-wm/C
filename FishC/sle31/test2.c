#include <stdio.h>

void a();
void b();
void c();

int count = 0;

void a()
{
	count++;
}

void b()
{
	count++;
}

void c()
{
	count++;
}

int main()
{
	a();
	b();
	c();

	printf("小郭今天被抱了%d次\n", count);
	
	return 0;
}

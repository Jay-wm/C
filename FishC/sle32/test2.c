#include <stdio.h>

void a();
void d();
void c();

int count;

int main(void)
{
	a();
	b();
	c();
	b();
	printf("小郭今天一共被抱了%d次\n", count);
	return;
}

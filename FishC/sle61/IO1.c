#include <stdio.h>
#include <string.h>

int main(void)
{
	char buff[1024];

	memset(buff, '\0', sizeof(buff));

	setvbuf(stdout, buff, _IONBF, 1024);
	fprintf(stdout, "Welcom to bbs.fishc.com\n");

	fflush(stdout);
	fprintf(stdout, "请输入任何字符后才会显示该行字符！\n");

	getchar();

	return 0;
}

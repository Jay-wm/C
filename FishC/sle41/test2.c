#include <stdio.h>

#define SHOWLIST(...) printf(# __VA_ARGS__)
#define PRINTF(format, ...) printf(# format, ## __VA_ARGS__)
int main(void)
{
	SHOWLIST(FishC 520 3.14\n);
	PRINTF(num = %d\n, 520);
	PRINTF(Hello FishC!\n);
	return 0;
}

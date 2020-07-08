#include <stdio.h>

int global_uninit_var = 520;

int main(void)
{
	static int num = 888;
	char *str = "FishC";
	return 0;
}

#include <stdio.h>

int main()
{
	int num = 2020;
	int *pi = &num;
	char *ps = "FishC";
	void *pv;

	pv = pi;
	printf("pi: %p, pv: %p, ", pi, pv);
	printf("*pv: %d\n", *(int *)pv);
	
	ps = (char *)pv;

	pv = ps;
	printf("ps: %p, pv: %p, ", ps, pv);	
	printf("*pv: %s\n", (char *)pv);
	return 0;
}

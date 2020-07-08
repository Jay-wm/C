#include <stdio.h>
#include <stdlib.h>

typedef struct Date
{
	int year;
	int month;
	int day;
} DATE, *PDATE;

int main(void)
{
	DATE *date;

	date = (PDATE)malloc(sizeof(DATE));
	if (date == NULL)
	{
		printf("内存分配失败！\n");
		exit(1);
	}

	date->year = 2020;
	date->month = 03;
	date->day = 20;

	printf("%d-%d-%d\n", date->year, date->month, date->day);

	return 0;

}

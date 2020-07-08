#include <stdio.h>
#include <stdlib.h>
#define N 4

struct Stus
{
	char name[24];
	int num;
	float score;
} stus[N], sb;

int main(void)
{
	FILE *fp;
	int i;

	if((fp = fopen("score.txt", "wb")) == NULL)
	{
		printf("打开文件失败！\n");
		exit(EXIT_FAILURE);
	}

	printf("请开始录入学生成绩（格式：姓名 学号 成绩）\n");
	for(i = 0; i < N; i++)
	{
		scanf("%s %d %f", stus[i].name, &stus[i].num, &stus[i].score);
	}

	fwrite(stus, sizeof(struct Stus), N, fp);
	fclose(fp);

	if((fp = fopen("score.txt", "rb")) == NULL)
	{
		printf("打开文件失败！\n");
		exit(EXIT_FAILURE);
	}

	fseek(fp, sizeof(struct Stus), SEEK_SET);
	fread(&sb, sizeof(struct Stus), 1, fp);
	printf("%s(%d)的成绩是：%.2f\n", sb.name, sb.num, sb.score);

	fclose(fp);

	return 0;
}


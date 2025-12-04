#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
void menu()
{
	printf("####################\n");
	printf("#1.Play##0.Exit#####\n");
	printf("####################\n");
}
int main()
{
	do
	{
		int input = 0;
		menu();
		printf("请选择：>");
		scanf("%d", &input);
		switch (input)
		{
		case 1:
			printf("开始游戏\n");
			break;
		case 0:
			printf("退出游戏\n");
			break;
		default:
			printf("错误\n");
			break;
		}
	} while (1);
	return 0;
}
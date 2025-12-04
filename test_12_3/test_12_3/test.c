#define _CRT_SECURE_NO_WARNINGS 1
//#include<stdio.h>
//#include<time.h>
//#include<stdlib.h>
//void menu()
//{
//	printf("########################################\n");
//	printf("###1.play###########0.not play##########\n");
//	printf("########################################\n");
//}
//void game()
//{
//	int ret = rand()%100+1;
//	int i = 0;
//	while (1)
//	{
//		printf("猜数字:");
//		scanf("%d", &i);
//		if (i > ret) {
//			printf("大了\n");
//		}
//		else if (i < ret) {
//			printf("小了\n");
//		}
//		else {
//			printf("恭喜你猜对了!\n");
//			break;
//		}
//	}
//}
//int main()
//{
//
//	int input = 0;
//	do
//	{
//		srand((unsigned int)time(NULL));
//		menu();
//		printf("请输入>:");
//		scanf("%d", &input);
//		switch (input)
//		{
//		case 1:printf("猜数字游戏\n");
//			game();
//			break;
//		case 0:printf("退出游戏\n");
//			break;
//		default:printf("输入错误，重新输入\n");
//			break;
//		}
//	} while (input);
//	return 0;
//}
//#include<stdio.h>
//#include<string.h>
//int main()
//{
//	int arr[] = { 1,2,3,4,5 };
//	int arr1[5] = { 0 };
//	char arr2[] = "1234567";
//	char arr3[8] = { 0 };
//	strcpy(arr1, arr);
//	strcpy(arr3, arr2);
//	printf("%d\n", arr1);
//	printf("%s\n", arr3);
//	return 0;
//}
//#include<stdio.h>
//void swap(int *x, int *y)
//{
//	int temp = 0;
//	temp = *x;
//	*x = *y;
//	*y = temp;
//}
//int main()
//{
//	int a = 0;
//	int b = 0;
//	scanf("%d", &a);
//	scanf("%d", &b);
//	swap(&a, &b);
//	printf("%d %d", a, b);
//
//	return 0;
//}
//#include<stdio.h>
//void cod(int* x)
//{
//	*x++;
//}
//int main()
//{
//	int num = 0;
//	cod(&num);
//	cod(&num);
//	printf("%d", num);
//	return 0;
//}
#include<stdio.h>
int main()
{
	printf("%d", printf("%d", printf("%d", 43)));

}
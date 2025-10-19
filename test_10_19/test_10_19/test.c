#define _CRT_SECURE_NO_WARNINGS 1
//#include<stdio.h>
//int main()
//{
//	int a = 200;
//	int b = 300;
//	if (a == b)
//	{
//		printf("hehe\n");
//	}
//	else {
//		printf("haha\n");
//	}
//	return 0;
//}
//#include<stdio.h>
//int	main()
//{
//	int a = 0;
//	int	b = 0;
//	scanf("%d %d", &a, & b);
//	int m = (a > b ? a : b);
//	printf("%d", m);
//	return 0;
//}
//三目操作符
//#include<stdio.h>
//void test()
//{
//	static int b = 0;
//	b++;
//	printf("%d ", b);
//	return 0;
//}
//int main()
//{
//	int a = 0;
//	while (a < 10)
//	{
//		test();
//		a++;
//	}
//	return 0;
//}
//static修饰局部变量

//#include<stdio.h>
//extern int a;
//int main()
//{
//	printf("%d", a);
//	return 0;
//}
//全局变量和extern
//#include<stdio.h>
//extern int add(int x, int y);
//int main()
//{
//	int a = 0;
//	int b = 0;
//	scanf("%d %d", &a, &b);
//	printf("%d", add(a, b));
//	return 0;
//}
//#include<stdio.h>
//#define M 100
//int main()
//{
//	int arr[M] = { 0 };
//	int m = M;
//	printf("%d\n", sizeof(arr));
//	printf("%d\n", M);
//	printf("%d\n", m);
//	return 0;
//}
//#include<stdio.h>
//#define ADD(x,y) ((x)+(y))
//int add(int x, int y) {
//	return x + y;
//}
//int main()
//{
//	int a = 0;
//	int b = 0;
//	scanf("%d %d", &a, &b);
//	printf("%d\n", ADD(a, b));
//	printf("%d\n", add(a, b));
//	return 0;
//}
//#include<stdio.h>
//struct Stu
//{
//	char name[20];
//	int age;
//	char sex[5];
//};
//struct book
//{
//	char name[20];
//	char author[20];
//	float price;
//};
//int main()
//{
//	struct Stu s = { "张三",23,"男" };
//	struct book b = { "《c语言》","李四",66.6f };
//	printf("%s %d %s\n", s.name, s.age, s.sex);
//	printf("%s %s %lf\n", b.name, b.author, b.price);
//	return 0;
//}
//结构体

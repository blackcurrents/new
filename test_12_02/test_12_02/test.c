#define _CRT_SECURE_NO_WARNINGS 1
//#include<stdio.h>
//int main()
//{
//	int age = 0;		
//	scanf("%d", &age);
//	if (age < 18)
//	{
//		printf("未成年。\n");
//	}
//	else {
//		printf("已成年。\n");
//	}
//	return 0;
//}
//#include<stdio.h>
//int main()
//{
//	int i = 1;
//	while (i < 100)
//	{
//		if(i%2==1)
//		{
//			printf("%d ", i);
//		}
//		i++;
//	}
//	return 0;
//}
//#include<stdio.h>
//int main()
//{
//	int day = 1;
//	scanf("%d", &day);
//	switch(day)
//	{
//		case 1:
//		case 2:
//		case 3:
//		case 4:
//		case 5:
//			printf("weekday\n");
//			break;
//		case 6:
//		case 7:
//			printf("weekend\n");
//          break;
//	}
//	return 0;
//}
//#include<stdio.h>
//int main()
//{
//	int m = 0;
//	for (m = 1; m <= 10; m++)
//	{
//		if (m == 5)
//		{
//			continue;
//		}
//		printf("%d\n", m);
//	}
//	return 0;
//}
//#include<stdio.h>
//int main()
//{
//	int m = 0;
//	scanf("%d", & m);
//	int n = 1;
//	int i = 0;
//	for (i = 1; i <= m; i++)
//	{
//		n = n * i;
//	}
//	printf("%d\n", n);
//	return 0;
//}
//#include<stdio.h>
//int main()
//{
//	int m = 1;
//	int sum = 0;
//	int i = 1;
//	int n = 0;
//	for (n = 1; n <= 3; n++)
//	{
//		m = 1;
//		for (i = 1; i <= n; i++)
//		{
//			m *= i;
//		}
//		sum = sum + m;
//	}
//	printf("%d\n", sum);
//	return 0;
//}
//有大量的重复计算
//#include<stdio.h>
//int main()
//{
//	int sum = 0;
//	int n = 1;
//	int ret = 1;
//	for (n = 1; n <= 10; n++)
//	{
//		ret *= n;
//		sum += ret;
//	}
//	printf("%d\n", sum);
//	return 0;
//}
//#include<stdio.h>
//int main()
//{
//	int arr[] = { 1,2,3,4,5,6,7,8,9 ,10	};
//	int m = 7;
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	int left = 0;
//	int right = sz - 1;
//	int flag = 0;
//	while (left <= right)
//	{
//		int mid = (left + right) / 2;
//		if (arr[mid] == arr[m])
//		{
//			flag = 1;
//			printf("找到了,下标为%d\n	", mid);
//			break;
//		}
//		else if (arr[mid] < arr[m])
//		{
//			left = mid + 1;
//		}
//		else {
//			right = mid - 1;
//		}
//	}
//	if (flag==0)
//	{
//		printf("无法找到\n");
//	}
//	return 0;
//}
//#include<stdio.h>
//#include<string.h>
//#include<windows.h>
//int main()
//{
//	char arr[] = "Welcome to the world!!!";
//	char arr1[] = "#######################";
//	int left = 0;
//	int right = strlen(arr1) - 1;
//	while (left <= right)
//	{
//		arr1[left] = arr[left];
//		arr1[right] = arr[right];
//		printf("%s\n", arr1);
//		left++;
//		right--;
//		Sleep(1000);
//		system("cls");
//	}
//	return 0;
//}

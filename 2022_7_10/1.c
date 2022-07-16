#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include <stdio.h>
//int i = 1;
//
//test(int num, char a, char b, char c)
//{
//	if (num == 1)
//	{
//		printf("第%d次:%c移到%c\n",i, a, c);
//		i++;
//	}
//	else
//	{
//		test(num - 1, a, c, b);
//		printf("第%d次:%c移到%c\n",i, a, c);
//		i++;
//		test(num - 1, b, a, c);
//	}
//}
//
//int main()
//{
//	char a = 'A', b = 'B', c = 'C';
//	int num=3;
//	scanf("%d", &num);
//	test(num, a, b, c);
//}
//int main()
//{
//	int i = 0;
//	int a = 0;
//	for (i = 1; i <=100; i++)
//	{
//		if (i % 10 == 9 )
//		{
//			a++;
//			printf("%d ", i);
//		}
//		 if (i / 10 == 9 )
//		{
//			a++;
//			printf("%d ", i);
//		}
//		
//
//	}
//	printf("%d", a);
//	return 0;
//}
//int main()
//{
//	int i = 0;
//	double sum = 0;
//	for (i = 1; i <= 100; i++)
//	{
//		if (i % 2 == 0)
//		{
//			double c = 1.0 / i;
//			sum = sum- c;
//		}
//		if (i % 2 == 1)
//		{
//			double c = 1.0 / i;
//			sum = sum +c;
//		}
//	}
//	printf("%.7lf", sum);
//}
//int main()
//{
//	int i = 0;
//	int num[10] = { 0 };
//	
//	for (i = 0; i < 10; i++)
//	{
//		scanf("%d",& num[i]);
//	}
//	int max = num[0];
//	for (i = 0; i <= 9; i++)
//	{
//		if (max < num[i ])
//			max = num[i ];
//		else
//			max = max;
//	}
//	printf("%d", max);
//	return 0;
//
//}
//int main()
//{
//	int i = 0;
//	int j = 0;
//	for (i = 1; i <= 9; i++)
//	{
//		for (j = 1; j <= i; j++)
//		{
//			printf("%d*%d=%d ", i, j, i * j);
//			if (j == i)
//				printf("\n");
//		}
//	}
//	return 0;
//}
//#include<stdlib.h>
//#include<time.h>
//
//int random()
//{
//	srand((unsigned int)time(NULL));
//	
//	int a = rand();
//	
//}
//int main()
//{
//	int a=random();
//	int b = 0;
//	a = (a % 9)+1;
//	
//	scanf("%d", &b);
//	while (a != b)
//	{
//		if (a < b)
//		{
//			printf("太大了,请重输:");
//			scanf("%d", &b);
//		}
//		if (a > b)
//		{
//			printf("太小了,请重输:");
//			scanf("%d", &b);
//		}
//	}
//	printf("恭喜你,猜对了!");
//	return 0;
//
//}
//void test(int a)
//{
//	if (a % 10 != a)
//	{
//		test(a / 10);
//		printf("%d ",a % 10);
//	}
//	else
//	{
//		printf("%d ", a);
//	}
//}
//int main()
//{
//	int a = 12896223;
//	test(a);
//	return 0;
//}
//void test(char arr[],int sz,char arr1[])
//{
//	int i = 0;
//	arr1[sz-1-i] = arr[i];
//	i++;
//	if (sz > 1)
//	{
//		test(arr, sz - 1, arr1);
//	}
//	else
//	{
//		arr1[9] = arr[0];
//	}
//
//}
//int main()
//{
//	int sz;
//	int i;
//	char arr1[10];
//	char arr[10] = { "asdfghasds"};
//	sz = strlen(arr) - 1;
//	test(arr,sz,arr1);
//	for (i = 1; i <= 10; i++)
//	{
//		printf("%c ", arr1[i-1]);
//	}
//	return 0;
//}
//int test(int x)
//{
//	if (x % 10 != x)
//	{
//		return test(x / 10) + (x % 10);
//	}
//	else
//		return x;
//}
//int main()
//{
//	int x = 0;
//	scanf("%d", &x);
//	int y =test(x);
//	printf("%d", y);
//	return 0;
//}
int test(int x,int k)
{
	if (k >= 2)
	{
		return test(x, k - 1) * x;
	}
	else if (k == 0)
		return 1;
	else if (k < 0)
	{

	}
	else
	{
		return x;
	}
}
int main()
{
	int x = 0;
	int k = 0;
	scanf("%d %d", &x, &k);
	int y = test(x, k);
	printf("%d", y);
	return 0;
}
#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<string.h>
#include<windows.h>
//int main()
//{
//	char arr1[] = { "welcome to bit!!!!!!" };
//	char arr2[] = { "####################" };
//	int i;
//	//int sz = sizeof(arr1) / sizeof(arr1[0]);
//	int sz = strlen(arr1);
//	int sz2 = sizeof(arr2) / sizeof(arr2[0]);
//	for (i = 0; i < sz/2; i++)
//	{
//		int a = sz - i-1;
//		arr2[i] = arr1[i];
//		arr2[a ]= arr1[a];
//		printf("%s\n", arr2);
//	}
//
//}
//int main()
//{
//	char password[20]={0};
//	int i,yes=20050215;
//	
//	
//	for (i=2;i>=0;i--)
//	{
//		scanf("%s", password);
//		if (password == yes)
//		{
//			printf("密码正确!");
//			return 0;
//		}
//		if (0==i)
//		{
//			printf("密码错误!静止登陆");
//		}
//		else
//		{
//			printf("密码错误!你还有%d次机会\n", i);
//
//		}
//	}
//
//	return 0;
//}
//int main()
//{
//	random();
//}

//int main()
//{
//	int a, b, c;
//	scanf("%d %d %d", &a, &b, &c);
//	if (a > b &&b> c)
//	{
//		printf("%d %d %d", a, b, c);
//	}
//	else if (a > c&&c > b)
//	{
//		printf("%d %d %d", a, c, b);
//	}
//	if (b > a&&a > c)
//	{
//		printf("%d %d %d", b, a, c);
//	}
//	if (b > c &&c> a)
//	{
//		printf("%d %d %d", b, c, a);
//	}
//	if (c > a&&a > b)
//	{
//		printf("%d %d %d", c, a, b);
//	}
//	if (c > b &&b> a)
//	{
//		printf("%d %d %d", c, b, a);
//	}
//	else
//	{
//		printf("1");
//	}
//
//
//	return 0;
//
//}
//int main()
//{
//	int i = 0;
//	for (i = 1; i <= 100; i++)
//	{
//		if (i % 3 == 0)
//		{
//			printf("%d\n", i);
//		}
//		else
//		{
//
//		}
//	}
//	return 0;
//}
//int main()
//{
//	 long long a, b, i = 333333333330,c=0,d=-1,e=-1;
//	scanf_s("%lld %lld", &a, &b);
//
//	while (d!=a&&e!=b)
//	{
//		d = a % i;
//		e = b % i;
//		if (a % i == 0 && b % i == 0)
//		{
//			c = i;
//		}
//		i++;
//	}
//	printf("%lld", c);
//}
//int main()
//{
//	printf("%d", sizeof(long long));
//}
//long long Min(a,b)
//{
//	if (a > b)
//		return b;
//	else
//		return a;
//}
//long long Max(a,b)
//{
//	if (a > b)
//		return a;
//	else
//		return b;
//}
//
//int main()
//{
//	long long a, i=0,b,c;
//	scanf("%lld %lld", &a, &b);
//	//min = Min(a, b);
//	//max = Max(a, b);
//	while (a % b != 0)
//	{
//		c = a % b;
//			a = b;
//		b = c;
//		i++;
//	}
//	printf("%lld,%lld", b,i);
//
//	return 0;
//}
//int main()
//{
//	int i = 1000;
//	for (i = 1000; i <= 2000; i++)
//	{
//		if (i % 400==0)
//			printf("%d ",i);
//		else if(i%4==0&&i%100!=0)
//			printf("%d ", i);
//	}
//	return 0;
//}
//int test(x)
//{
//	int b;
//	int i = 0;
//	for (i = 1; i < x; i++)
//	{
//		if (x % i == 0)
//			b = i;
//	}
//	if (b == 1)
//		return x;
//	else
//		return 0;
//
//}
//int main()
//{
//	int a, b, c,i;
//	for (i = 2; i <= 2000; i++)
//	{
//		a = test(i);
//		if (a == 0)
//			;
//		else
//			printf("%d ", a);
//	}
//	return 0;
//}
//#include<stdlib.h>
//int main()
//{
//	int add[20] = { 0 };
//	printf("60s后自动关机\n");
//	system("shutdown -s -t 60");
//	char d[] = { "23456"};
//aaa:
//	printf("输入123停止关机\n");
//	scanf("%s", add);
//	if (strcmp(add, "123") == 0)
//	{
//
//		system("shutdown -a");
//		printf("已停止关机");
//	}
//	else
//		goto aaa;
//
//	return 0;
//}
void swap(int* x,int* y)
{
	int z = *x;
	*x = *y;
	*y = z;

}
int main()
{
	int a = 10, b = 20;
	printf("%d %d\n", a, b);
	swap(&a, &b);
	printf("%d %d", a, b);
	return 0;
}
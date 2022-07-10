#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<string.h>
//int main()
//{
//	int arr[10] = { 0 };
//	int i = 0;
//	int sum = 0;
//	for (i = 0; i < 10; i++)
//	{
//		scanf("%d", &arr[i]);
//	}
//	for (i = 0; i < 10; i++)
//	{
//		sum = sum + arr[i];
//	}
//	sum = sum / 10;
//	printf("%d", sum);
//	return 10;
//}
//int a = 10;
//
//int main()
//{
//	int a = 2;
//	printf("%d", a);
//	printf("%d", a);
//	printf("%d", a);
//	
//}
//int main()
//{
//	int a=strlen("hello world");
//	printf("%d", a);
//	return 0;
//}
//int main()
//{
//	
//	char arr[] = { 'a','b','a','d','e','\0'};
//	
//	printf("%d", strlen(arr));
//
//}
//int main()
//{
//	printf("%s",'88');
//	return 0;
//}
//int main()
//{
//	int a = 1;
//	int b = (++a) + (++a);// +(++a);
//	printf("%d", b);
//	return 0;
//
//int main()
//{
//	int a = (int)3.9;
//	printf("%d", a);
//	return 0;
//}
int main()
{
	int a=4;
	int b = 5;
	int max = 0;
	max=a < b ? b+1 : a;
	printf("%d", max);
	return 0;
}
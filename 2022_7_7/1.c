#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>

//
//void  test()
//{
//	
//}
//int main()
//{
//	static int a = 1;
//	printf("%d", a);
//	return 0;
//}
//int main()
//{
//	int x = 166;
//	int y = 167;
//	int * px = &x;
//	int * py = &y;
//	printf("%d\n", px);
//	printf("%p\n", px);
//	printf("%p\n", x);
//	printf("%p", y);
//	
//
//int main()
//{
//	printf("%zd", sizeof(short*));
//	printf("%zd", sizeof(char*));
//	printf("%zd", sizeof(int*));
//	printf("%zd", sizeof(long*));
//	printf("%zd", sizeof(long long*));
//	printf("%zd", sizeof(float*));
//	printf("%zd", sizeof(double*));
//	return 0;
//}
//int main()
//{
//	int n = 19;
//	int arr[n];
//	return 0;
//}
//int max(a,b)
//{
//	if (a < b)
//	{
//		return b;
//	}
//	else
//	{
//		return a;
//	}
//}
//int main()
//{
//	int a;
//	int b;
//	printf("请输入a\n");
//		
//	scanf("%d", &a);
//	printf("请输入b\n");
//	scanf("%d", &b);
//	int m=max(a, b);
//	printf("最大值是%d", m);	
//	return 0;
//}

//int main()
//{
//    printf("\t**\d\t**\d************\d************\d\t*  *\d\t*  *\n");
//    printf("\t**\d\t**\d************\d************\d\t*  *\d\t*  *");
//    return 0;   
//        
//    11111
//}
//int main()
//{
//    char a, b;
//    scanf("%c", &a);
//    scanf("%c", &b);
//    scanf("%c", &b);
//    printf("%c", a);
//    printf("%c", b);
//}
//int main()
//{
//	int i=0;
//	while(i<=100)
//	{
//		if (0 == i % 2)
//			i++;
//		else
//		{
//			printf("%d\n", i);
//			i++;
//		}
//	}
////}
//int main()
//{
//	int i = 1;
//	while (i <= 10)
//	{
//		printf("%d", i);
//		++i;
//	}
////}
//int main()
//{
//	int ch;
//	while ((ch = getchar()) != EOF)
//		putchar(ch);
//	return 0;
//}
//int main()
//{
//	int x, y;
//	for (x = 0, y = 0; x < 2 && y < 5; x++, y++)
//		printf("1");
//}
//int test(x)
//{
//	int i=x;
//	for (; i > 1;)
//	{
//		i--;
//		x = x * i;
//		
//	}
//	return x;
//
//}
//int main()
//{
//	int i=0,  sum=0;
//	for (i = 1; i <= 4; i++)
//	{
//		sum += test(i);
//	}
//	printf("%d", sum);
//	return 0;
//}
int main()
{
	int add[] = { 1,2,3,4,5,6,7,8,9,10 };
	int sz = sizeof(add) / sizeof(add[0]);
	int left=0, right=sz-1, mid=(left+right)/2, k = 11;
	while (add[mid]!=k)
	{
		if (k < add[mid])
		{
			right = mid - 1;
			mid = (left + right) / 2;
		}
		else if (k > add[mid])
		{
			left = mid + 1;
			mid = (left + right) / 2;
		}
		
	}
	printf("找到了%d", add[mid]);
	
		
	return 0;
}

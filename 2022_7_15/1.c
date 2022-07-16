#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
int main()
{
	int a;
	int b = 1;
	int count = 0;
	scanf("%d", &a);
	while(a)
	{
		int c = a & b;
		if (c == a)
		{
			a = a >> 1;
		}
		else
		{
			count++;
			a = a >> 1;
		}
	}
	printf("%d", count);
	return 0;
}
#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
void test(int arr[],int sz)
{
	int i = 0;
	static int j = 0;
	for (i = 0; i <sz-1 ; i++)
	{
		if (arr[i]>arr[i+1])
		{
			int a = arr[i];
			arr[i]=arr[i+1];
			arr[i+1] = a;
		}
	}
	j++;
	if (j <sz )
	{
		test(arr, sz);
	}
}
int main()
{
	int arr[] = { 13,4,2,5,745,4,32,5,1,53 };
	int i;
	int sz = sizeof(arr) / sizeof(arr[0]);
	test(arr, sz);
	for (i = 0; i < 10; i++)
	{
		printf("%d ", arr[i]);
	}
	return 0;
}
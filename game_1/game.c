#define _CRT_SECURE_NO_WARNINGS
#include "game.h"
void mune()
{
	printf("*******************************\n");
	printf("******    1.��ʼ  *************\n");
	printf("******    0.�˳�  *************\n");
	printf("*******************************\n");
}
//��ʼ������
void begin(char arr[][LIE], int hang, int lie)
{
	int i = 0;
	int j = 0;
	for (i = 0; i < hang; i++)
	{
		for (j = 0; j < lie; j++)
		{
			arr[i][j] = ' ';
		}
	}
}
//��ӡ����
void my_printf(char arr[HANG][LIE], int hang, int lie)
{
	int i;
	int j;
	for (i = 0; i < hang; i++)
	{
		for (j = 0; j < lie; j++)
		{
			printf(" %c ", arr[i][j]);
			if(j<lie-1)
			printf("|");
		}
		printf("\n");
		for (j = 0; j < lie; j++)
		{
			printf("---");
			if (j < lie - 1)
				printf("|");
		}
		printf("\n");
	}
}
//����ƶ�
void playmove(char arr[HANG][LIE], int hang, int lie)
{
	int x = 0;
	int y = 0;
	
	while (1)
	{
		scanf("%d %d", &x, &y);
		if (arr[x - 1][y - 1] != ' ')
			printf("��ռλ������������\n");
		else if (x <= hang && x > 0 && y <=lie && y>0)
		{
			arr[x - 1][y - 1] = '*';
			break;
		}
		else
			printf("����������\n");
	}
}
//�����ƶ�
void computermove(char arr[HANG][LIE], int hang, int lie)
{

	while (1)
	{
		int x = rand() % hang;
		int y = rand() % lie;
		if (arr[x][y] == '#'||arr[x][y]=='*')
			;
		else
		{
			arr[x][y] = '#';
			break;
		}
	}	
}
//ʤ���ж�
//����*���
//����#����
//����Pƽ��
//����C����
char win(char arr[HANG][LIE], int hang, int lie)
{
	int i;
	int j;
	int count1 = 0;
	int count2 = 0;
	for (i = 0; i < hang; i++)
	{
		count1 = 0;
		for (j = 0; j < lie; j++)
		{
			if (arr[i][j] == '*')
				count1++;
			if (count1 == hang)
				return '*';
		}
	}
	for (i = 0; i < hang; i++)
	{
		count2 = 0;
		for (j = 0; j < lie; j++)
		{
			if (arr[i][j] == '#')
				count2++;
			if (count2 == hang)
				return '#';
		}
	}
	
	for (j = 0;j < lie; j++)
	{
		count2 = 0;
		for (i = 0; i < hang; i++)
		{
			if (arr[i][j] == '#')
				count2++;
			if (count2 == hang)
				return '#';
		}
	}
	
	for (j = 0; j < lie;j++)
	{
		count1 = 0;
		for (i = 0; i< hang; i++)
		{
			if (arr[i][j] == '*')
				count1++;
			if (count1 == hang)
				return '*';
		}
	}
	
	count1 = 0;
	count2 = 0;
	//��bug
	//
	//
	//
	//
	for (i = 0; i < hang; i++)
	{
		j = i;
		if (arr[i][j] == '*')
			count1++;
		if (arr[i][j] == '#')
			count2++;
	}
	if (count1 == hang)
		return '*';
	if (count2 == lie)
		return '#';
	count1 = 0;
	for (i = 0; i < hang; i++)
	{
		for (j = 0; j < lie; j++)
		{
			if (arr[i][j] == ' ')
				count1++;
		}
	}
	if (count1 == 0)
		return 'P';//ƽ����bug
	return 'C';
}

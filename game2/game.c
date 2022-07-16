#define _CRT_SECURE_NO_WARNINGS
#include "game.h"

void begin(char arr[HANGS][LIES], int hangs, int lies,char x)
{
	int i = 0;
	int j = 0;
	for (i = 0; i < hangs; i++)
	{
		for (j = 0; j < lies; j++)
		{
			arr[i][j] = x;
		}
	}
}
void my_printf(char arr[HANGS][LIES], int hang, int lie)
{
	int i = 1;
	int j = 1;
	for (i = 0; i <= hang; i++)
	{
		printf("%d ", i);
	}
	printf("\n");
	for (i = 1; i <= hang; i++)
	{
		printf("%d ", i);
		for (j = 1; j <= lie; j++)
		{
			
			printf("%c ", arr[i][j]);
		}
		printf("\n");
	}
}
void thunder(char arr[HANGS][LIES], int hang, int lie)
{
	int count = Thunder;
	while (count)
	{
		int x = rand() % 9 + 1;
		int y = rand() % 9 + 1;
		if (arr[x][y] == '0')
		{
			arr[x][y] = '1';
			count--;
		}
	}
}
void find(char mine[HANGS][LIES],char show[HANGS][LIES], int x, int y)
{
	int count = 0;
	int i = x - 1;
	int j = y - 1;
	for (i = x - 1; i <= x + 1; i++)
	{
		for (j = y - 1; j <= y + 1; j++)
		{
			if (mine[i][j] == '1')
				count++;
		}
	}
	if (count == 0)
	{
		/*if (x > 0 && x <= HANG && y > 0 && y <= LIE)
		{
			for (i = x - 1; i <= x + 1; i++)
			{
				for (j = y - 1; j <= y + 1; j++)
				{
					find(mine, show, i, j);
				}
			}
		}*/
		show[x][y] = '0' + count;
	}

	else
	{
		show[x][y] = '0' + count;
	}
}
void find_thunder(char mine[HANGS][LIES], char show[HANGS][LIES],int hang, int lie)
{
	int x,y;
	int win = 0;
	while (1)
	{
		printf("请输入排查坐标:");
		scanf("%d %d", &x, &y);
		if (x >= 1 && x <= hang && y > 0 && y <= lie)
		{
			if (show[x][y] == '*')
			{
				if (mine[x][y] == '1')
				{
					printf("很遗憾,您被炸死了!\n");
					printf("3s后回到主界面\n");
					Sleep(3000);
					system("cls");
					break;
				}
				if (mine[x][y] == '0')
				{
					find(mine, show, x, y);
					system("cls");
					my_printf(show, HANG, LIE);
					win++;
				}
			}
			else
			{
				printf("坐标已排查!请重新输入\n");
			}
		}
		else
		{
			printf("输入不规范,请重新输入:");
		}
		if (win == hang * lie - Thunder)
		{
			system("cls");
			printf("游戏获胜!\n");
			my_printf(mine, HANG, LIE);
			printf("3s后重新开始\n");
			Sleep(3000);
			system("cls");
			break;
		}
	}
}
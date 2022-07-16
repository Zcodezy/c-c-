#define _CRT_SECURE_NO_WARNINGS
#include "game.h"

void menu()
{
	printf("*********************************\n");
	printf("*******    1.play    ************\n");
	printf("*******    0.exit    ************\n");
	printf("*********************************\n");
}
void game()
{
	char mine[HANGS][LIES];
	char show[HANGS][LIES];
	//初始化
	begin(mine, HANGS, LIES,'0');
	begin(show, HANGS, LIES,'*');
	//布置雷
	thunder(mine,HANG,LIE);
	//打印
	//my_printf(mine, HANG, LIE);
	my_printf(show, HANG, LIE);
	//排查类
	find_thunder(mine, show, HANG, LIE);
}
int main()
{
	int x;
	srand((unsigned int)time(NULL));
	do
	{
		menu();
		printf("请选择:");
		scanf("%d", &x);
		system("cls");
		if (x == 1)
		{
			game();
		}
		else if (x == 0)
		{
			printf("退出游戏");
		}
		else
		{
			printf("填写错误,请重新输入\n");
		}
	} while (x);
	return 0;
}
#define _CRT_SECURE_NO_WARNINGS
#include "game.h"
int main()
{
	int a;
	srand((unsigned int)time(NULL));
	do
	{
		mune();
		scanf("%d", &a);
		if (a == 1)
		{	
			char arr[HANG][LIE];
			printf("开始游戏\n");
			//初始化棋盘
			begin(arr,HANG,LIE);
			//打印棋盘
			my_printf(arr, HANG, LIE);
			//胜利判定
			//返回*玩家
			//返回#电脑
			//返回P平局
			//返回C继续
			while (1)
			{
				//玩家移动
				printf("请移动\n");
				playmove(arr, HANG, LIE);
				my_printf(arr, HANG, LIE);
				char a = win(arr, HANG, LIE);
				if (a == '*')
				{
					printf("玩家获胜!\n");
					break;
				}
				if (a == '#')
				{
					printf("电脑获胜!\n");
					break;
				}
				if (a == 'P')
				{
					printf("平局!\n");
					break;
				}
				if (a = 'c')
					printf("1");
				if (a == 'C')
				{
					;
				}
				//电脑移动
				computermove(arr, HANG, LIE);
				printf("电脑移动\n");
				my_printf(arr, HANG, LIE);
				a = win(arr, HANG, LIE);
				if(a == '*')
				{
					printf("玩家获胜!\n");
					break;
				}
				if (a == '#')
				{
					printf("电脑获胜!\n");
					break;
				}
				if (a == 'P')
				{
					printf("平局!\n");
					break;
				}
				if (a = 'c')
					printf("1");
				if (a == 'C')
				{
					;
				}
			}
			printf("3秒后重新开始");
			Sleep(3000);
			
			system("cls");
		}
		else if (a == 0)
		{
			printf("退出游戏\n");
			break;
		}
		else
			printf("请重新输入\n");
	} while (a);
	return 0;
}
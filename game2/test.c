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
	//��ʼ��
	begin(mine, HANGS, LIES,'0');
	begin(show, HANGS, LIES,'*');
	//������
	thunder(mine,HANG,LIE);
	//��ӡ
	//my_printf(mine, HANG, LIE);
	my_printf(show, HANG, LIE);
	//�Ų���
	find_thunder(mine, show, HANG, LIE);
}
int main()
{
	int x;
	srand((unsigned int)time(NULL));
	do
	{
		menu();
		printf("��ѡ��:");
		scanf("%d", &x);
		system("cls");
		if (x == 1)
		{
			game();
		}
		else if (x == 0)
		{
			printf("�˳���Ϸ");
		}
		else
		{
			printf("��д����,����������\n");
		}
	} while (x);
	return 0;
}
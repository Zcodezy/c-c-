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
			printf("��ʼ��Ϸ\n");
			//��ʼ������
			begin(arr,HANG,LIE);
			//��ӡ����
			my_printf(arr, HANG, LIE);
			//ʤ���ж�
			//����*���
			//����#����
			//����Pƽ��
			//����C����
			while (1)
			{
				//����ƶ�
				printf("���ƶ�\n");
				playmove(arr, HANG, LIE);
				my_printf(arr, HANG, LIE);
				char a = win(arr, HANG, LIE);
				if (a == '*')
				{
					printf("��һ�ʤ!\n");
					break;
				}
				if (a == '#')
				{
					printf("���Ի�ʤ!\n");
					break;
				}
				if (a == 'P')
				{
					printf("ƽ��!\n");
					break;
				}
				if (a = 'c')
					printf("1");
				if (a == 'C')
				{
					;
				}
				//�����ƶ�
				computermove(arr, HANG, LIE);
				printf("�����ƶ�\n");
				my_printf(arr, HANG, LIE);
				a = win(arr, HANG, LIE);
				if(a == '*')
				{
					printf("��һ�ʤ!\n");
					break;
				}
				if (a == '#')
				{
					printf("���Ի�ʤ!\n");
					break;
				}
				if (a == 'P')
				{
					printf("ƽ��!\n");
					break;
				}
				if (a = 'c')
					printf("1");
				if (a == 'C')
				{
					;
				}
			}
			printf("3������¿�ʼ");
			Sleep(3000);
			
			system("cls");
		}
		else if (a == 0)
		{
			printf("�˳���Ϸ\n");
			break;
		}
		else
			printf("����������\n");
	} while (a);
	return 0;
}
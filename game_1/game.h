#pragma once
//����ͷ�ļ�
#include<stdio.h>
#include<time.h>
#include<stdlib.h>
#include<windows.h>


//��������
#define LIE  3
#define HANG 3
//��������
void mune();
void begin(char arr[HANG][LIE], int hang, int lie);
void my_printf(char arr[HANG][LIE], int hang, int lie);
void playmove(char arr[HANG][LIE], int hang, int lie);
void computermove(char arr[HANG][LIE], int hang, int lie);
char win(char arr[HANG][LIE],int hang,int lie);
#pragma once
//引用头文件
#include<stdio.h>
#include<time.h>
#include<stdlib.h>
#include<windows.h>


//声明参数
#define LIE  3
#define HANG 3
//声明函数
void mune();
void begin(char arr[HANG][LIE], int hang, int lie);
void my_printf(char arr[HANG][LIE], int hang, int lie);
void playmove(char arr[HANG][LIE], int hang, int lie);
void computermove(char arr[HANG][LIE], int hang, int lie);
char win(char arr[HANG][LIE],int hang,int lie);
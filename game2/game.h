#pragma once
#include<stdio.h>
#include<stdlib.h>
#include<time.h>
#include<windows.h>

#define HANGS 11
#define LIES 11
#define HANG 9
#define LIE 9
#define Thunder 10

void begin(char arr[HANGS][LIES], int hangs, int lies,char x);
void my_printf(char arr[HANGS][LIES], int hang, int lie);
void thunder(char arr[HANGS][LIES], int hang, int lie);
void find_thunder(char mine[HANGS][LIES],char show[HANGS][LIES], int hang, int lie);
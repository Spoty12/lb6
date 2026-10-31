#define _CRT_SECURE_NO_WARNINGS
#include <locale.h>
#include <stdio.h>

int main(){
	setlocale(LC_ALL, "RUS");

	int year;
	int oct;

	printf("Введите год : ");
	scanf("%d", &year);
	oct = year % 4; 
	
	if ((oct == 0 && year % 100 != 0) || year % 400 == 0)
	{
		printf("Год %d - Високосный год", year);
	}

	else
	{
		printf("Год %d - не високосный", year);
	}

	return 0;
}
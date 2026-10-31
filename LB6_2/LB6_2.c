#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <locale.h>
#include <math.h>

int main() {

	setlocale(LC_ALL, "RUS");

	double F;
	double x;
	const double pi = 3.141592653589793;

	printf("Ââåäèòå çíà÷åíèå x: ");
	scanf_s("%lf", &x);

	if (x >= 0 && x <= 1)
	{
		F = x * x - x;
	}
	else
	{
		F = x * x - sin(pi * x * x);
	}

	printf("F(%.2lf) = %.4lf\n", x, F);
	
	return 0;



}
 

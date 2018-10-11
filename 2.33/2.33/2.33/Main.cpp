#include <stdio.h>
#include <stdlib.h>

float a;
float b;
float c;
float d;
float e;
float fee;

int main(void)
{
	printf("Enter these data, and you will get how much you cost per day of driving to work:\n");

	printf("a)Total miles driven per day	: $");
	scanf_s("%f", &a);

	printf("b)Cost per gallon of gasoline	: $");
	scanf_s("%f", &b);

	printf("c)Average miles per gallon	: $");
	scanf_s("%f", &c);

	printf("d)Parking fees per day		: $");
	scanf_s("%f", &d);

	printf("e)Tolls per day			: $");
	scanf_s("%f", &e);

	fee = (a / c * b) + d + e;
	printf("\n");

	printf("You spend $%.2f per day of driving to work.\n", fee);

	system("pause");
	return 0;
}
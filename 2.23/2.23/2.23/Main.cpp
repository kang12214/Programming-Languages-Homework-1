#include <stdio.h>
#include <stdlib.h>

int main(void)
{
	int num1;
	int num2;
	int num3;

	printf("Enter 3 number and I will show you which is the largest and smallest:\n");
	scanf_s("%d%d%d", &num1, &num2, &num3);

	if (num1 >= num2 && num1 >= num3)
	{
		printf("%d is the largest number. ", num1);
	}
	else if (num2 >= num1 && num2 >= num3)
	{
		printf("%d is the largest number. ", num2);
	}
	else if (num3 >= num2 && num3 >= num1)
	{
		printf("%d is the largest number.", num3);
	}
	if (num1 <= num2 && num1 <= num3)
	{
		printf("%d is the smallest number. ", num1);
	}
	else if (num2 <= num1 && num2 <= num3)
	{
		printf("%d is the smallest number. ", num2);
	}
	else if (num3 <= num2 && num3 <= num1)
	{
		printf("%d is the smallest number.", num3);
	}
	system("pause");
	return 0;
}
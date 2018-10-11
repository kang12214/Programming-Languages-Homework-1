#include <stdio.h>
#include <stdlib.h>

int main(void)
{
	int num1;
	int num2;

	printf("Enter two integers, and I will tell you they are odd or even:\n");
	scanf_s("%d%d", &num1, &num2);
	if (num1 % 2 != 0)
	{
		printf("%d is an odd.\n",num1);
	}
	if (num1 % 2 == 0)
	{
		printf("%d is an even.\n", num1);
	}
	if (num2 % 2 != 0)
	{
		printf("%d is an odd.\n", num2);
	}
	if (num2 % 2 == 0)
	{
		printf("%d is an even.\n", num2);
	}
	system("pause");
	return 0;
}
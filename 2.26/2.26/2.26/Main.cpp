#include <stdio.h>
#include <stdlib.h>

int main(void)

{
	int num1;
	int num2;

	printf("Enter two integers, and I will tell you the first integer is or isn't the multiple of the second integer:\n");

	scanf_s("%d%d", &num1, &num2);

	if (num2 % num1 != 0)
	{
		printf("%d is not the multiple of %d.\n", num1, num2);
	}
	if (num2 % num1 == 0)
	{
		printf("%d is the multiple of %d.\n", num1, num2);
	}
	system("pause");
	return 0;
}
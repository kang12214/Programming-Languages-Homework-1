#include <stdio.h>
#include <stdlib.h>

int main(void)
{

	printf("Number	Square	Cude\n");
	for (int num = 0; num <= 10; num++)
	{
		int square = num * num;
		int cude = num * num * num;
		printf("%d",num);
		printf("	");
		printf("%d",square);
		printf("	");
		printf("%d\n",cude);
		printf("\n");
	}
	system("pause");
	return 0;
}
#include <stdio.h>
#include <stdlib.h>

int main(void)
{
	float height;
	float weight;
	float BMI;

	printf("Enter you height and weight so that you can get your BMI:\n");
	printf("Height(m)	:");
	scanf_s("%f", &height);
	printf("Weight(kg)	:");
	scanf_s("%f", &weight);

	BMI = weight/height/height ;

	printf("\n");
	printf("Your BMI is %.1f\n", BMI);
	if (BMI < 18.5)
	{
		printf("You are underweight!\n");
	}
	if (BMI >= 18.5 && BMI <= 24.9)
	{
		printf("Your weight are normal!\n");
	}
	if (BMI >= 25 && BMI <= 29.9)
	{
		printf("You are overweight!\n");
	}
	if (BMI > 30)
	{
		printf("You are obese!\n");
	}
	system("pause");
	return 0;
};
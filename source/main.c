#include <stdio.h>
#include <stdlib.h>

int main(void)
{
	double H, W, BMI;

	printf("How tall are you?(m)\n");
	scanf_s("%lf", &H);

	printf("How much do you weigh?(kg)\n");
	scanf_s("%lf", &W);

	BMI = W / (H*H);
	printf("Your BMI is %lf\n", BMI);

	if (BMI < 18.5)
	{
		printf("Underweight");
	}

	if (BMI <= 24.9 && BMI >= 18.5)
	{
		printf("Normal");
	}

	if (BMI <= 29.9 && BMI >= 25)
	{
		printf("Overweight");
	}

	if (BMI >= 30)
	{
		printf("Obese");
	}
	system("pause");
	return 0;
}
	
#include <stdio.h>

int main()
{
	float salario, des;
	scanf("%f", &salario);
	if (salario <= 2000.0)
	{
		printf("Isento\n");
	}
	else if (salario <= 3000.0)
	{
		des = (salario - 2000.0) * 0.08;
		printf("R$ %.2f\n", des);
	}
	else if (salario <= 4500.0)
	{
		des = 1000.0 * 0.08 + (salario - 3000.0) * 0.18;
		printf("R$ %.2f\n", des);
	}
	else
	{
		des = 1000.0 * 0.08 + 1500.0 * 0.18 + (salario - 4500.0) * 0.28;
		printf("R$ %.2f\n", des);
	}
	return 0;
}
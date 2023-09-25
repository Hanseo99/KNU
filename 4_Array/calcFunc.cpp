#include "calcFunc.h"
#include <stdio.h>

int AddNum(int a, int b)
{
	int sum = 0;
	sum = a + b;
	printf("두 수의 합은 = %d\n", sum);
	return 0;
}

int MinusNum(int a, int b)
{
	int diff = 0;
	diff = a - b;
	printf("두 수의 차는 = %d\n", diff);
	return 0;
}

int MultiplyNum(int a, int b)
{
	int prod = 0;
	prod = a * b;
	printf("두 수의 곱은 = %d\n", prod);
	return 0;
}

float DivideNum(float a, float b)
{
	float div = 0;
	div = a / b;
	printf("두 수를 나눈 값은 = %.2f\n", div);
	return 0;
}

int RemainNum(int a, int b)
{
	int remain = 0;
	remain = a % b;
	printf("두 수를 나누고 남은 나머지는 = %d\n", remain);
	return 0;
}
#include "calcFunc.h"
#include <stdio.h>

int AddNum(int a, int b)
{
	int sum = 0;
	sum = a + b;
	printf("�� ���� ���� = %d\n", sum);
	return 0;
}

int MinusNum(int a, int b)
{
	int diff = 0;
	diff = a - b;
	printf("�� ���� ���� = %d\n", diff);
	return 0;
}

int MultiplyNum(int a, int b)
{
	int prod = 0;
	prod = a * b;
	printf("�� ���� ���� = %d\n", prod);
	return 0;
}

float DivideNum(float a, float b)
{
	float div = 0;
	div = a / b;
	printf("�� ���� ���� ���� = %.2f\n", div);
	return 0;
}

int RemainNum(int a, int b)
{
	int remain = 0;
	remain = a % b;
	printf("�� ���� ������ ���� �������� = %d\n", remain);
	return 0;
}
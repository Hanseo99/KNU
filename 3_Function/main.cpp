#include <stdio.h>

// �Լ���
// unsigned int : ��ȯ �ڷ���<-Output
// CalculatorSum : �Լ� �̸�
// (int x, int y) : �Ű� ����(�Ķ��Ÿ)<-Input
unsigned int CalculatorSum(int x, int y)
{//->�Լ� ����
	printf("�Լ� �����ߴ�.\n");

	return x + y;//<-��ȯ �� ���� ó��

	printf("�Լ� ������.\n");
}//->�Լ� ��

// ���� �Լ� �����
// CalculatorMinus
int CalculatorMinus(int x, int y)
{
	return x - y;
}
// ���ϱ� �Լ� �����
// CalculatorMultiply
int CalculatorMultiply(int x, int y)
{
	return x * y;
}

// ������ �Լ� �����
// CalculatorDivide
float CalculatorDivide(float x, float y)
{
	return x / y;
}

// ������ �Լ� �����
// CalculatorRemain
float CalculatorRemain(int x, int y)
{
	return x % y;
}

// Factorial �Լ�
int Factorial(int Num)
{
	int FacResult = 1;
	for (int i = Num; i > 0; --i)
	{
		FacResult *= i;
	}

	return FacResult;
}

int Factorial2(int Num)
{
	int FacResult = 1;

	for (int i = 1; i <= Num; ++i)
	{
		FacResult *= i;
	}

	return FacResult;
}

int ReFactorial(int Num)
{
	if (Num == 1)
	{
		return 1;
	}

	return Num * ReFactorial(Num - 1);
}

// SumToN �Լ�
int SumToN(int Num)
{
	int FacResult = 0;
	for (int i = Num; i > 0; --i)
	{
		FacResult += i;
	}

	return FacResult;
}

void CallFunction();

int main()
{
	//unsigned int nResult = 0;
	//nResult = CalculatorSum(1, 1);
	//printf("���ϱ� �Լ� ���� ��� = %d\n", nResult);
	//nResult = CalculatorMinus(1, 1);
	//printf("���� �Լ� ���� ��� = %d\n", nResult);
	//nResult = CalculatorMultiply(2, 2);
	//printf("���ϱ� �Լ� ���� ��� = %d\n", nResult);
	//float fResult = 0.0f;
	//fResult = CalculatorDivide(10, 3);
	//printf("������ �Լ� ���� ��� = %f\n", fResult);
	//fResult = CalculatorRemain(10, 4);
	//printf("������ �Լ� ���� ��� = %f\n", fResult);
	//CallFunction();

	//// �ݺ���
	//// for��
	//for (/*�ʱ� ����*/int i = 0;/*�ݺ� ���� äũ*/i < 10;/*�ݺ� �� ó��*/++i)
	//{// <-�ݺ� ó���� �ڵ� ����
	//	
	//	printf("%d Hello\n", i);
	//}// <-�ݺ� ó���� �ڵ� ��

	//int a = 0;
	//for (; a < 5; ++a)
	//{
	//	printf("HelloA\n");
	//}

	//for (int b = 0;b < 10;b+=2)
	//{
	//	printf("HelloB\n");
	//}
	
	// 1. int i = 0;
	// 2. i = 0�̰�, i < 10 äũ ����� true(1)
	// 3. �ݺ� ó���� �ڵ� ����
	// 4. �ݺ� �� ó�� ++i(i�� 1���� ��Ų��.) i = 1;
	//~~~~~~~~~~~~~
	// 1. int i = 9;
	// 2. i = 9�̰�, i < 10 äũ ����� true(1)
	// 3. �ݺ� ó���� �ڵ� ����
	// 4. �ݺ� �� ó�� ++i(i�� 1���� ��Ų��.) i = 10;
	// 1. int i = 10;
	// 2. i = 10�̰�, i < 10 äũ ����� false(0)


	//for (int i = 0;i < 10;++i)
	//{
	//	printf("Hello\n");
	//}


	// Factorial
	// 5 Factorial ���ض�
	// 5 * 4 * 3 * 2 * 1 = 15; 

	printf("Factorial FacResult = %d\n", Factorial(5));
	printf("Factorial2 FacResult = %d\n", Factorial2(5));
	printf("ReFactorial FacResult = %d\n", ReFactorial(5));
	printf("SumToN Result = %d\n", SumToN(10));

	//1~n���� �� ���ϴ� �Լ�
	//int SumToN(int Num)
}

void CallFunction()
{
	printf("�Լ� ȣ����!");
}

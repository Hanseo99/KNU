#include <stdio.h>

//�Լ���
// unsigned int : ��ȯ �ڷ���<-Output
// CaculatorSum : �Լ� �̸�
// (int x, int y) : �Ű� ����(�Ķ����)<-Input
unsigned int CaculatorSum(int x, int y)
{//->�Լ� ����
	printf("�Լ� �����ߴ�.\n");

	return x+y;//<-��ȯ �� ���� ó��

	printf("�Լ� ������.\n");
}//->�Լ� ��

//���� �Լ� �����
unsigned int CalculatorMinus(int x, int y)
{
	int diff = 0;
	diff = x - y;
	return diff;
}

//���ϱ� �Լ� �����
unsigned int CalculatorMultiply(int x, int y)
{
	int product = 0;
	product = x * y;
	return product;
}

//������ �Լ� �����
unsigned int CalculatorDevide(int x, int y)
{
	int division = 0;
	division = x / y;
	return division;
}

//������ �Լ� �����
unsigned int CalculatorRemain(int x, int y)
{
	int remain = 0;
	remain = x % y;
	return remain;
}

void CallFunction()
{

	printf("�Լ� ȣ��ƴ� !\n");
}

int main()
{
	unsigned int nResult = 0;
	CallFunction();
	nResult = CaculatorSum(1, 1);
	printf("���� �Լ� ���� ��� = %d\n", nResult);
	nResult = CalculatorMinus(75, 30);
	printf("���� �Լ� ���� ��� = % d\n", nResult);
	nResult = CalculatorDevide(75, 30);
	printf("������ �Լ� ���� ��� = %d\n", nResult);
	nResult = CalculatorRemain(75, 30);
	printf("������ �Լ� ���� ��� = %d\n", nResult);
}
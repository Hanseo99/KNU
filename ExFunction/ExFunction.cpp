#include <stdio.h>
#include "Devide.h"
#include "Sum.h"
#include "Minus.h"
#include "Multi.h"

// �Լ��̸� : Sum
// �Ű� ���� (�Ķ��Ÿ) : int a, int b
// ��ȯ �� : int
// a �� b�� ���� ����� ��ȯ�Ͻÿ�


// �Լ��̸� : Minus
// �Ű� ���� (�Ķ��Ÿ) : int a, int b
// ��ȯ �� : int
// a �� b�� ������ ����� ��ȯ�Ͻÿ�


// �Լ��̸� : Multi
// �Ű� ���� (�Ķ��Ÿ) : int a, int b
// ��ȯ �� : int
// a �� b�� ���ϱ��� ����� ��ȯ�Ͻÿ�


// �Լ��̸� : Devide
// �Ű� ���� (�Ķ��Ÿ) : float a, float b
// ��ȯ �� : float
// a �� b�� �������� ����� ��ȯ�Ͻÿ�

// �Լ��̸� : Average
// �Ķ��Ÿ int &Sum, int a,b,c�� ��հ��� ��ȯ
// ��ȯ�� ����
// ���۷��� ���� Sum���� a,b,c�� ��հ��� ��ȯ

class CShop
{
public:
	int m_value = 0;

	void printValue()
	{
		printf("Value = %d\n", m_value);
	}
};

class CPhoneShop : public CShop
{
	CPhoneShop(int PhoneCnt, int PhonePrice) : m_PhoneCnt(PhoneCnt), m_PhonePrice(PhonePrice)
	{}

public:
	void printValue() 
	{
		printf("Value=%d\n", m_PhoneCnt * m_PhonePrice);
	}

	
public:
	int m_PhoneCnt;
	int m_PhonePrice;
};

class CFruitShop : public CShop
{
public:
	CFruitShop(int FruitCnt, int FruitPrice):m_FruitCnt(FruitCnt), m_FruitPrice(FruitPrice)
	{}

	void printValue()
	{
		printf("Value = %d\n", m_FruitCnt * m_FruitPrice);
	}

	int m_FruitCnt;
	int m_FruitPrice;
};

void Average(int& Sum, int a, int b, int c)
{
	Sum = (a + b + c) / 3;
}

// �Լ��̸� : ArraySum
// �Ķ��Ÿ int* arr, int length
// ��ȯ�� : int
// �迭 "arr"�� �迭�� ���� "length"�� �Ķ��Ÿ�� �޾Ƽ���� �迭�� ���� ��ȯ

int ArraySum(int* arr, int length) 
{
	int sum = 0;
	for (int i = 0; i < length; ++i) 
	{
		sum += arr[i];
	}
	return sum;
}



int main()
{
	// printf�� "Sum = %d\n"�� Sum�Լ� ��� ���
	printf("Sum = %d\n",Sum(5,6));
	// printf�� "Minus = %d\n"�� Minus�Լ� ��� ���
	printf("Minus = %d\n",Minus(5,6));
	// printf�� "Multi = %d\n"�� Multi�Լ� ��� ���
	printf("Multi = %d\n", Multi(5, 6));
	// printf�� "Devide = %d\n"�� Devide�Լ� ��� ���
	printf("Devide = %f\n", Devide(5, 6));

	int avg;
	Average(avg, 12, 30, 60);
	printf("Average = %d\n", avg);

	int arr[] = { 1, 2, 3, 4, 5 };
	int length = sizeof(arr) / sizeof(arr[0]);

	printf("�迭�� ��: %d\n", ArraySum(arr, length));

	CPhoneShop Phoneshop(10, 100);
	Phoneshop.printValue();

	CFruitShop FruitShop(10, 100);
	FruitShop.printValue();

	
}
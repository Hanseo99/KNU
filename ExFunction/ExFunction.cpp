#include <stdio.h>
#include "Devide.h"
#include "Sum.h"
#include "Minus.h"
#include "Multi.h"

// 함수이름 : Sum
// 매개 변수 (파라메타) : int a, int b
// 반환 값 : int
// a 와 b를 합한 결과를 반환하시오


// 함수이름 : Minus
// 매개 변수 (파라메타) : int a, int b
// 반환 값 : int
// a 와 b를 빼기한 결과를 반환하시오


// 함수이름 : Multi
// 매개 변수 (파라메타) : int a, int b
// 반환 값 : int
// a 와 b를 곱하기한 결과를 반환하시오


// 함수이름 : Devide
// 매개 변수 (파라메타) : float a, float b
// 반환 값 : float
// a 와 b를 나누기한 결과를 반환하시오

// 함수이름 : Average
// 파라메타 int &Sum, int a,b,c의 평균값을 반환
// 반환값 없음
// 레퍼런스 변수 Sum으로 a,b,c의 평균값을 반환

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

// 함수이름 : ArraySum
// 파라메타 int* arr, int length
// 반환값 : int
// 배열 "arr"와 배열의 길이 "length"를 파라메타로 받아서모든 배열의 합을 반환

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
	// printf로 "Sum = %d\n"로 Sum함수 결과 출력
	printf("Sum = %d\n",Sum(5,6));
	// printf로 "Minus = %d\n"로 Minus함수 결과 출력
	printf("Minus = %d\n",Minus(5,6));
	// printf로 "Multi = %d\n"로 Multi함수 결과 출력
	printf("Multi = %d\n", Multi(5, 6));
	// printf로 "Devide = %d\n"로 Devide함수 결과 출력
	printf("Devide = %f\n", Devide(5, 6));

	int avg;
	Average(avg, 12, 30, 60);
	printf("Average = %d\n", avg);

	int arr[] = { 1, 2, 3, 4, 5 };
	int length = sizeof(arr) / sizeof(arr[0]);

	printf("배열의 합: %d\n", ArraySum(arr, length));

	CPhoneShop Phoneshop(10, 100);
	Phoneshop.printValue();

	CFruitShop FruitShop(10, 100);
	FruitShop.printValue();

	
}
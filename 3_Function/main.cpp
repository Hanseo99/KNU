#include <stdio.h>

//함수형
// unsigned int : 반환 자료형<-Output
// CaculatorSum : 함수 이름
// (int x, int y) : 매개 변수(파라미터)<-Input
unsigned int CaculatorSum(int x, int y)
{//->함수 시작
	printf("함수 시작했다.\n");

	return x+y;//<-반환 및 종료 처리

	printf("함수 끝났다.\n");
}//->함수 끝

//빼기 함수 만들기
unsigned int CalculatorMinus(int x, int y)
{
	int diff = 0;
	diff = x - y;
	return diff;
}

//곱하기 함수 만들기
unsigned int CalculatorMultiply(int x, int y)
{
	int product = 0;
	product = x * y;
	return product;
}

//나누기 함수 만들기
unsigned int CalculatorDevide(int x, int y)
{
	int division = 0;
	division = x / y;
	return division;
}

//나머지 함수 만들기
unsigned int CalculatorRemain(int x, int y)
{
	int remain = 0;
	remain = x % y;
	return remain;
}

void CallFunction()
{

	printf("함수 호출됐다 !\n");
}

int main()
{
	unsigned int nResult = 0;
	CallFunction();
	nResult = CaculatorSum(1, 1);
	printf("덧셈 함수 실행 결과 = %d\n", nResult);
	nResult = CalculatorMinus(75, 30);
	printf("뺄셈 함수 실행 결과 = % d\n", nResult);
	nResult = CalculatorDevide(75, 30);
	printf("나눗셈 함수 실행 결과 = %d\n", nResult);
	nResult = CalculatorRemain(75, 30);
	printf("나머지 함수 실행 결과 = %d\n", nResult);
}
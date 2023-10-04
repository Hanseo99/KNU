#include <stdio.h>
#include "MyClass.h"

struct stMyStruct
{
	int a;
	int b;
	int c;
};


// Class(변수, 자료형)
// Class는 사용자 정의 Type이라고 한다.
// C의 struct의 확장 된 개념
// C++의 클래스는 세가지 액세스(접근) 지정자(private, protected, public)에 의해
// 액세스가 제어되는 멤버로 데이터 및 함수가 있는 사용자 정의 유형 또는 데이터 구조를 만든다.
// 액세스 지정자를 사용하여 데이터 및 함수를 만드는 걸 캡슐화라고도 한다.
// Class를 한글로 번역하면 형틀이라는 뜻
// 객체를 생성하기 위한 모양을 나타낸다.

// 객체(Object)
// Class를 사용해서 생성된 걸 객체라고 한다.
// Class에 선언한 변수들이 생성되고 메모리에서 공간을 차지함

// 객체 지향 프로그래밍
// 컴퓨터 프로그램을 명령어의 목록으로 보는 시각에서 벗어나 여러 개의 독립된 단위
// 즉, "객체"들의 모임으로 구조를 만들고자 하는 패러다임
// 각각의 객체는 메시지를 주고 받고, 데이터를 독립적으로 처리할 수 있다.


class CMyClass// 변수형
{
	// 접근 지정자
	// private : 외부에서 접근 불가
	// protected : 상속관계일 때 접근이 가능, 이외에는 접근 불가
	// public : 어디서든 접근 가능

	// 위에 접근 지정자가 없으면 기본적으로 private
	int m_b;// 클래스 안에 선언 된 변수를 멤버 변수라고 한다.( 개발자들은 멤버 변수라는 것을 표시하기 위해 형식적으로 m_를 붙히기도 한다.)
	
public:
	// 생성자
	// 클래스가 생성 될 때 호출되는 함수
	// 선언하지 않아도 기본 생성자가 존재
	// 생성자도 private면 외부에 호출 불가, 반드시 public으로 선언
	// 생성자도 파라메타의 개수와 타입에 다라 Overload(타입 별 여러개 함수를 생성) 할 수 있다.
	// (int valueA = 0) 이런 방힉으로 생성 시 파라메타를 넣어줄 수 있다.
	// :a(valueA), m_b(0), c(0) <- 이런 방식으로 생성 시 멤버 변수에 초기값을 세팅 할 수 있다.
	// 파라메타 변수의 형태가 입력 방식에 의해 선택이 불가능 하면 문제가 발생한다.
	CMyClass(int valueA) :a(valueA), m_b(0), c(0)
	{
		printf("생성자A 호출됨\n");
	}

	CMyClass(int valueA, int valueB) :a(valueA), m_b(valueB), c(0)
	{
		printf("생성자B 호출됨\n");
	}

	CMyClass(int valueA, int valueB, int valueC) :a(valueA), m_b(valueB), c(valueC)
	{
		printf("생성자C 호출됨\n");
	}
	// 파괴자
	// 클래스가 파괴 될 때 호출되는 함수
	// 선언 하지 않아도 기본 파괴자가 존재
	// 파괴자도 public이 아니면 호출이 불가, 반드시 public으로 선언
	~CMyClass()
	{
		printf("파괴자 호출됨\n");
	}

	void PrintB()
	{
		printf("B = %d\n", m_b);
	}

	void PrintAllValue()
	{
		printf("A = %d,B = %d,C = %d\n", a, m_b, c);
	}

	void SetC(int num)
	{
		// 일반적으로 this 키워드는 생략함 
		// this : 클래스 안에서 함수가 호출된 대상 객체를 의미함
		this->c = num;
	}

	// 연산자 오버로딩(Operator Overloading)
	// 대입연산자 (기본적으로 생성됨)
	// const CMyClass& : 왼쪽으로 반환 될 변수형
	// operator= : 오버로딩 할 연산자
	// (const CMyClass& other) : 오른쪽에 입력 될 변수

	//cMy3 = cMy + cMy2;
	//cMy3 = CMyClass(a + other.a, m_b + other.m_b, c + other.c);
	const CMyClass& operator=(const CMyClass& other)
	{
		a = other.a;
		m_b = other.m_b;
		c = other.c;

		return *this;
	}

	const CMyClass& operator+(const CMyClass& other)
	{
		return CMyClass(a + other.a, m_b + other.m_b, c + other.c);
	}
public:
	int a;
protected:
private:
	int c;
};


int main()
{
	{
		// 레퍼런스 참조
		// 메모리 복제가 되지 않고 원본을 참조하여 메모리를 효율적으로 사용하기 위한 연산자
		
		int num = 100;
		stMyStruct stTest;

		// 포인터 참조는 포인터 변수의 주소 값을 참조한다.
		// 포인터 변수의 주소값과 포인터가 가르키고 있는 주소값은 다르다.
		int* pNum = &num;// pNum 포인터 변수에는 num의 주소 값이 들어간다. 즉, pNum은 num변수를 가리키고 있다.
		stMyStruct* pTest = &stTest;
		pTest->a = 0;
		printf("&pNum != &num ? %d\n", (int(&pNum) != int(&num)));

		// 레퍼런스 참조는 원본 대상의 주소값과 동일하다.
		int& refNum = num;
		stMyStruct& refTest = stTest;
		refTest.a = 0;
		printf("&refNum == &num ? %d\n", (int(&refNum) == int(&num)));
	}
	stMyStruct stMy;
	stMy.a = 0;

	CMyClass cMy(100);//->생성자A 호출됨
	CMyClass cMy2(100,200);//->생성자B 호출됨
	cMy.a = 0;
	cMy.SetC(0);// 특정 변수를 수정하기 위한 함수를 생헝해서 개발 하는 것이 기본 규칙이다.
	//cMy.c = 100;//만약 변수가 private로 되어있다면 개발자가 직접 접근하지 말라는 의도가 있다는 것

	CMyClass2 aa(10);

	CMyClass cMy3(0);
	cMy.a = 1000;
	cMy.PrintAllValue();
	cMy2.PrintAllValue();
	cMy3 = cMy + cMy2;
	cMy.PrintAllValue();
	cMy3.PrintAllValue();
	
	

}//<-파괴자 호출됨
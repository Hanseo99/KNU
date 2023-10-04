#include <stdio.h>
#include "MyClass.h"

struct stMyStruct
{
	int a;
	int b;
	int c;
};


// Class(����, �ڷ���)
// Class�� ����� ���� Type�̶�� �Ѵ�.
// C�� struct�� Ȯ�� �� ����
// C++�� Ŭ������ ������ �׼���(����) ������(private, protected, public)�� ����
// �׼����� ����Ǵ� ����� ������ �� �Լ��� �ִ� ����� ���� ���� �Ǵ� ������ ������ �����.
// �׼��� �����ڸ� ����Ͽ� ������ �� �Լ��� ����� �� ĸ��ȭ��� �Ѵ�.
// Class�� �ѱ۷� �����ϸ� ��Ʋ�̶�� ��
// ��ü�� �����ϱ� ���� ����� ��Ÿ����.

// ��ü(Object)
// Class�� ����ؼ� ������ �� ��ü��� �Ѵ�.
// Class�� ������ �������� �����ǰ� �޸𸮿��� ������ ������

// ��ü ���� ���α׷���
// ��ǻ�� ���α׷��� ��ɾ��� ������� ���� �ð����� ��� ���� ���� ������ ����
// ��, "��ü"���� �������� ������ ������� �ϴ� �з�����
// ������ ��ü�� �޽����� �ְ� �ް�, �����͸� ���������� ó���� �� �ִ�.


class CMyClass// ������
{
	// ���� ������
	// private : �ܺο��� ���� �Ұ�
	// protected : ��Ӱ����� �� ������ ����, �̿ܿ��� ���� �Ұ�
	// public : ��𼭵� ���� ����

	// ���� ���� �����ڰ� ������ �⺻������ private
	int m_b;// Ŭ���� �ȿ� ���� �� ������ ��� ������� �Ѵ�.( �����ڵ��� ��� ������� ���� ǥ���ϱ� ���� ���������� m_�� �����⵵ �Ѵ�.)
	
public:
	// ������
	// Ŭ������ ���� �� �� ȣ��Ǵ� �Լ�
	// �������� �ʾƵ� �⺻ �����ڰ� ����
	// �����ڵ� private�� �ܺο� ȣ�� �Ұ�, �ݵ�� public���� ����
	// �����ڵ� �Ķ��Ÿ�� ������ Ÿ�Կ� �ٶ� Overload(Ÿ�� �� ������ �Լ��� ����) �� �� �ִ�.
	// (int valueA = 0) �̷� �������� ���� �� �Ķ��Ÿ�� �־��� �� �ִ�.
	// :a(valueA), m_b(0), c(0) <- �̷� ������� ���� �� ��� ������ �ʱⰪ�� ���� �� �� �ִ�.
	// �Ķ��Ÿ ������ ���°� �Է� ��Ŀ� ���� ������ �Ұ��� �ϸ� ������ �߻��Ѵ�.
	CMyClass(int valueA) :a(valueA), m_b(0), c(0)
	{
		printf("������A ȣ���\n");
	}

	CMyClass(int valueA, int valueB) :a(valueA), m_b(valueB), c(0)
	{
		printf("������B ȣ���\n");
	}

	CMyClass(int valueA, int valueB, int valueC) :a(valueA), m_b(valueB), c(valueC)
	{
		printf("������C ȣ���\n");
	}
	// �ı���
	// Ŭ������ �ı� �� �� ȣ��Ǵ� �Լ�
	// ���� ���� �ʾƵ� �⺻ �ı��ڰ� ����
	// �ı��ڵ� public�� �ƴϸ� ȣ���� �Ұ�, �ݵ�� public���� ����
	~CMyClass()
	{
		printf("�ı��� ȣ���\n");
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
		// �Ϲ������� this Ű����� ������ 
		// this : Ŭ���� �ȿ��� �Լ��� ȣ��� ��� ��ü�� �ǹ���
		this->c = num;
	}

	// ������ �����ε�(Operator Overloading)
	// ���Կ����� (�⺻������ ������)
	// const CMyClass& : �������� ��ȯ �� ������
	// operator= : �����ε� �� ������
	// (const CMyClass& other) : �����ʿ� �Է� �� ����

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
		// ���۷��� ����
		// �޸� ������ ���� �ʰ� ������ �����Ͽ� �޸𸮸� ȿ�������� ����ϱ� ���� ������
		
		int num = 100;
		stMyStruct stTest;

		// ������ ������ ������ ������ �ּ� ���� �����Ѵ�.
		// ������ ������ �ּҰ��� �����Ͱ� ����Ű�� �ִ� �ּҰ��� �ٸ���.
		int* pNum = &num;// pNum ������ �������� num�� �ּ� ���� ����. ��, pNum�� num������ ����Ű�� �ִ�.
		stMyStruct* pTest = &stTest;
		pTest->a = 0;
		printf("&pNum != &num ? %d\n", (int(&pNum) != int(&num)));

		// ���۷��� ������ ���� ����� �ּҰ��� �����ϴ�.
		int& refNum = num;
		stMyStruct& refTest = stTest;
		refTest.a = 0;
		printf("&refNum == &num ? %d\n", (int(&refNum) == int(&num)));
	}
	stMyStruct stMy;
	stMy.a = 0;

	CMyClass cMy(100);//->������A ȣ���
	CMyClass cMy2(100,200);//->������B ȣ���
	cMy.a = 0;
	cMy.SetC(0);// Ư�� ������ �����ϱ� ���� �Լ��� �����ؼ� ���� �ϴ� ���� �⺻ ��Ģ�̴�.
	//cMy.c = 100;//���� ������ private�� �Ǿ��ִٸ� �����ڰ� ���� �������� ����� �ǵ��� �ִٴ� ��

	CMyClass2 aa(10);

	CMyClass cMy3(0);
	cMy.a = 1000;
	cMy.PrintAllValue();
	cMy2.PrintAllValue();
	cMy3 = cMy + cMy2;
	cMy.PrintAllValue();
	cMy3.PrintAllValue();
	
	

}//<-�ı��� ȣ���
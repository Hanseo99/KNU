#include <stdio.h>
// c++ �� ������
// c++���� ����� �ۼ��� �ҽ��ڵ带 ��ǻ�Ͱ� ������ �ִ� �ڵ�� ��ȯ�Ͽ� �����Ҽ� �ִ� ���Ϸ� ��ȯ�ϴ� ����

// 1. ��ó��(Preprocessing) �ܰ� : #include �� #define �� ���� ��ó���� ��ũ�ε��� ó���ϴ� �ܰ�
// 2. ������(Compile) �ܰ� : ������ �ҽ� ���ϵ��� ����� ��ɾ�� ��ȯ
// 3. �����(Assemble) �ܰ� : ����� �ڵ���� ���� ����� �̷���� ���� �ڵ�(Object file)�� ��ȯ�ϴ� �ܰ�
// 4. ��ŷ(Linking) �ܰ� : ������ ���� �ڵ���� �ѵ� ��Ƽ� �ϳ��� ���� ������ �����ϴ� �ܰ�


// �޸� ����
// 1. Code ���� : ������ �ڵ尡 ����Ǿ��ִ� ����(����� ����)
// 2. Data ���� : ��������, Static �������� ����, ���μ����� ����ɶ� ���� �޸𸮿� �����
// 3. Stack ���� : ��������, �Ű��������� ����, �Լ��� ȣ��Ǹ� �����ǰ� �Լ��� ����Ǹ� �ý��ۿ� ��ȯ
// 4. Heap ���� : malloc �Ǵ� new �Լ��� ���ؼ� �������� �Ҵ�Ǵ� ����, malloc() �Ǵ� new �����ڷ� �Ҵ�, free() �Ǵ� delete �����ڷ� ����

int g_money = 0;// ���� ����

static int s_money = 0;

#include "money.h"
#include "calcFunc.h"

struct fruitShop
{
	int appleA;
	int mangoA;
	int strawberryA;

	// ����ü ������ ":" �� ���� ������ ������ �ʱⰪ�� �����Ѵ�.
	fruitShop() : appleA(1000), mangoA(1000), strawberryA(1000)
	{

	}

	// ����ü�� �Լ� ����
	void SetFruitValue(int apple, int mango, int strawberry)
	{
		int appleB = apple;// SetFruitValue �Լ��� ����Ǹ� �������.
		appleA = apple;
		mangoA = mango;
		strawberryA = strawberry;
	}

	void printShopValue()
	{
		printf("���ϰ��� ���� ���:%d, ����:%d, ����:%d\n", appleA, mangoA, strawberryA);
	}
};

struct PhoneShop
{
	int iPhone;
	int zFlip;
	int GalaxyS23;
	int GalaxyFold;

	PhoneShop() : iPhone(100), zFlip(100), GalaxyS23(100), GalaxyFold(100)
	{

	}

	void SetPhoneValue(int iphone, int flip, int S23, int fold)
	{
		
		iPhone = iphone;
		zFlip = flip;
		GalaxyS23 = S23;
		GalaxyFold = fold;
	}

	void printPhoneValue()
	{
		printf("�ڵ��� ���� ������:%d, �ø�:%d, S23:%d ����:%d\n", iPhone, zFlip, GalaxyS23, GalaxyFold);
	}
};

int Add(int a, int b)
{
	return a + b;
}

float Add(float a, float b)
{
	return a + b;
}

double Add(double a, double b)
{
	return a + b;
}

int main()
{
	int t_money = 0;
	addMoney(100);
	addMoney(100);
	addMoney(100);
	addMoney(100);
	addMoney(100);

	printf("main t_money=%d\n", t_money);
	printf("main g_money=%d\n", g_money);
	//AddNum(5, 6);
	//MinusNum(17, 2);
	//MultiplyNum(4, 12);
	//DivideNum(55, 7);
	//RemainNum(55, 7);
	Add(1, 1);
	Add(1.0f, 1.0f);//f�� ������ �Ǽ��� ���� float��
	Add(1.0, 1.0);//f�� ������ �ʰ� �Ǽ��� ���� double��

	// �迭
	// int arrInt[10] = { 0 };// ���� 0���� �ʱ�ȭ
	// int arrInt[10] = { 0, };// ���� 0���� �ʱ�ȭ
	int arrInt[10] = { 0,1,2,3,4,5,6,7,8,9 };// ������ �迭�� �ʱⰪ �ִ� ��� 
	arrInt[0] = 10;// �迭�� 1��°�� �� �ֱ�
	arrInt[4] = 40;// �迭�� 5��°�� �� �ֱ�
	arrInt[9] = 90;// 0������ �迭�� ���۵ǹǷ� 10��° �迭�� 9��

	for(int i = 0; i<10; i++)
	{
		printf("%d��° �迭 ���� %d�Դϴ�.\n", i, arrInt[i]);//2�� �̻��� �Ķ��Ÿ ��� ���
	}

	int number = 0;
	for (int value : arrInt)
	{
		printf("for each %d��° �迭 ���� %d�Դϴ�.\n", number, value);
		number++;
	}

	// Struct�� ���
	// fruitShop : ������
	// shop : ������ �̸�
	fruitShop shop[3];
	//shop.appleA = 1000;// shop�� appleA ������ �� �ֱ�
	//shop.mangoA = 2000;// shop�� mangoA ������ �� �ֱ�
	//shop.strawberryA = 3000;// shop�� strawberryA ������ �� �ֱ�

	//Struct �Լ� ����
	shop[0].SetFruitValue(1000, 2000, 3000);
	shop[1].SetFruitValue(1100, 2100, 3100);
	shop[2].SetFruitValue(900, 1900, 2900);

	for (fruitShop stValue : shop)
	{
		stValue.printShopValue();
	}

	// Struct PhoneShop
	// int iPhone
	// int zFlip
	// int GalaxyS23;
	// int GalaxyFold;
	// PhoneShop[0] iPhone=100, zFlip=90, GalaxyS23=80, GalaxyFold=150
	// PhoneShop[1] iPhone=110, zFlip=100, GalaxyS23=90, GalaxyFold=160
	// PhoneShop[2] iPhone=90, zFlip=80, GalaxyS23=70, GalaxyFold=140
	// PhoneShop[0],PhoneShop[1],PhoneShop[2]�� ������ ���

	PhoneShop pshop[3];
	pshop[0].SetPhoneValue(100, 90, 80, 150);
	pshop[1].SetPhoneValue(110, 100, 90, 160);
	pshop[2].SetPhoneValue(90, 80, 70, 140);
	
	for (PhoneShop pValue : pshop)
	{
		pValue.printPhoneValue();
	}

}
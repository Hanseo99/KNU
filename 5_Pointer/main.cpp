#include <stdio.h>

void BuyItem(int *Money, int price)
{
	// int* Money�� �޸� ������ �Ͼ�� �ʴ´�.
	// �޸��� ȿ������ ����, ������ ������ ���ϴ�.
	*Money -= price;
}

enum ePhoneType
{
	iPhone = 0,
	Galaxys23,
	GalaxyFold,
	GalaxyZ
};

struct stPhoneShop
{
	int iPhoneCnt;
	int GalaxyS23;
	int GalaxyFold;
	int GalaxyZ;

	void printPhoneCnt()
	{
		printf("iPhone =%d, GalaxyS23=%d, GalaxyFold=%d, GalaxyZ=%d\n", iPhoneCnt, GalaxyS23, GalaxyFold, GalaxyZ);
	}

};

void BuyPhone(ePhoneType phoneType,stPhoneShop* pPS)
{
	switch (phoneType)
	{
	case ePhoneType::iPhone:
		pPS->iPhoneCnt--;// ����Ʈ�� �����ϴ� ����ü�� ������"->"Ű����� �����Ѵ�.
		break;
	case ePhoneType::Galaxys23:
		pPS->GalaxyS23--;// ����Ʈ�� �����ϴ� ����ü�� ������"->"Ű����� �����Ѵ�.
		break;
	case ePhoneType::GalaxyFold:
		pPS->GalaxyFold--;// ����Ʈ�� �����ϴ� ����ü�� ������"->"Ű����� �����Ѵ�.
		break;
	case ePhoneType::GalaxyZ:
		pPS->GalaxyZ--;// ����Ʈ�� �����ϴ� ����ü�� ������"->"Ű����� �����Ѵ�.
		break;
	default:
		break;
	}
	

}

//Number �޾Ƽ� ȭ�鿡 ����Ѵ�.
void printNumber(const int* number)
{
	// number = nullptr;// �������ּ� ���� ������ �� �ִ�.
	printf("print number=%d\n", *number);
}

void printNumber2(const int& number)
{
	printf("print number=%d\n", number);
}

void printPhoneShop(const stPhoneShop* ps)
{
	printf("print iPhoneCnt = %d\n", ps->iPhoneCnt);
	
}

void printPhoneShop(const stPhoneShop& ps)
{
	printf("print iPhoneCnt = %d\n", ps.iPhoneCnt);
}

int main()
{
	int a = 0;//4Byte
	int b = 0;
	// �����͸� ����ϴ� ����
	// �޸��� ȿ������ ����, ������ ������ ���ϴ�.
	// int* pA : ������ ������ ����(pA�� ���ִ� �ּҿ� int���� ũ�⸸ŭ �����ϰڴ�)
	// nullptr : ������ ������ �ʱ�ȭ ��(�ּҰ��� �������)
	// �������� NULL�� ����ߴµ� NULL = 0�� �ǹ� �׷��� 0�̶� �ǹ̰� �����ؼ� ���� �߻�
	// �ּҰ��� ����ִٴ� ��Ȯ�� �ǹ̸� ���� nullptr���
	// �������� ũ��(x32 4Byte, x64 8Byte)
	

	int* pA = nullptr;
	pA = &a;// a�ּҰ��� pA�� �ִ´�.
	// * : ���۷����� �����Ѵ�.(�ּҰ� ����Ű�� �ִ� ���� �����Ѵ�.)
	b = *pA;// b�� pA�� ����Ű�� �ִ� �ּ��� ���� �ִ´�.
	*pA = 10;// pA�� ����Ű�� �ִ� �ּ��� ���� 10���� �����Ѵ�.

	//-------------------------------------------------------------------//

	int num1 = 0;
	int num2 = 0;
	int* pNum = nullptr;
	pNum = &num1;   // pNum�� num1�� �ּ� ���� �ִ´�.(pNum�� num1�� ����Ű�� �ִ� ����)
	printf("pNum = %d\n", *pNum);//num1�� ���� 0
	*pNum = 20;     // pNum�� ����Ű�� �ִ� num1�� 20�� �ִ´�.
	printf("pNum = %d\n", *pNum);//num1�� ���� 20
	pNum = &num2;   // pNum�� num2�� �ּ� ���� �ִ´�.(pNum�� num2�� ����Ű�� �ִ� ����)
	printf("pNum = %d\n", *pNum);//num2�� ���� 0
	*pNum = 30;     // pNum�� ����Ű�� �ִ� num2�� 30�� �ִ´�.
	printf("pNum = %d\n", *pNum);//num2�� ���� 30

	printf("num1 = %d num2 = %d\n", num1, num2);
	//------------------------------------------------------------------//

	int Money = 10000;

	BuyItem(&Money, 1000);
	printf("MyMoney = %d\n", Money);

	stPhoneShop stPS;
	stPS.iPhoneCnt = 100;
	stPS.GalaxyS23 = 100;
	stPS.GalaxyFold = 100;
	stPS.GalaxyZ = 100;

	BuyPhone(ePhoneType::iPhone, &stPS);
	stPS.printPhoneCnt();

	//----------------------------------------------------------------------------------------------------//
	// �迭�� ������

	int arrInt[10] = { 0,10,20,30,40,50,60,70,80,90 };
	int* pInt = nullptr;// pInt�� ���ִ� �ּҿ� int���� ũ�⸸ŭ �����ϰڴ�.
	pInt = arrInt;
	printf("pInt=%d\n", *pInt);
	pInt += 1;//���� �迭 �������� �ּҸ� ����Ų��.
	printf("pInt=%d\n", *pInt);

	short arrS[10]= { 0,10,20,30,40,50,60,70,80,90 };
	pInt = (int*)arrS;// (int*)�� ����ؼ� int*�� ������ ����ȯ(Cast)�Ѵ�.
	pInt += 1;// pInt�� int*�̹Ƿ� int(4Byte)��ŭ�� ���� �ּ� ���� �����Ѵ�. 
	short* pS = (short*)pInt;//int(4Byte)��ŭ �̵��� �ּ� ���� Short(2Byte) 2�� �̵��� ��
	printf("pS=%d\n", *pS);

	// �Ʒ� �迭�� ���� ���� ������� ���
	int arr[10] = { 10,2,78,53,6,33,27,99,7,31 };
	int i,j,num;
	for (int i= 0; i< 10;i++)
	{
		for (j= i+1; j < 10; j++)
		{
			if (arr[i] > arr[j])
			{
				num = arr[i];
				arr[i] = arr[j];
				arr[j] = num;
			}
		}
	}

	for (i = 0; i < 10; i++)
	{
		printf("%d\n", arr[i]);
	}

	// const ���ȭ
	// const int cint = 100;// ���
	// �Ǽ��� ���� �� �־ ����� Ƚ���� ���� �� �ִ�.(����� : ���׸� ã�ų� �����ϴ� ��� ����)

	int value = 0;
	int value2 = 0;
	int* pValue = &value;
	//const int* pValue = &value;// �����Ͱ� ����Ű�� ���� ���� �Ұ�, ������ �� ���� ����, ���� ����
	//int const* pValue = &value;// �����Ͱ� ����Ű�� ���� ���� �Ұ�, ������ �� ���� ����, ���� ����
	//int* const pValue = &value;// �����Ͱ� ����Ű�� ���� ���� ����, ������ �� ���� �Ұ�, ���� ����
	//const int* const pValue = &value;// �����Ͱ� ����Ű�� ���� ���� �Ұ�, ������ �� ���� �Ұ�, ���� ����
	//int const* const pValue = &value;// �����Ͱ� ����Ű�� ���� ���� �Ұ�, ������ �� ���� �Ұ�, ���� ����

	*pValue = 2;
	pValue = &value2;
	printf("pValue=%d\n", *pValue);

	printNumber(&value);
	printNumber2(value);
}
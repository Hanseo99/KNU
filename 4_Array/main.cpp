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
	AddNum(5, 6);
	MinusNum(17, 2);
	MultiplyNum(4, 12);
	DivideNum(55, 7);
	RemainNum(55, 7);
}
#include <stdio.h>
#include <vector>
#include <string>
#include "Card.h"
#include <random>

// 1. 52���� ī��� ������ �մϴ�.
// 2. 52���� ī�带 �������� �����ϴ�.
// 3. ������ ���۵Ǹ� ī�� �ϳ��� �����մϴ�
// 4. �÷��̾�� ����ī�尡 ���� �� ī�庸�� ���� ī������ ���� ī�������� ���� ���� �մϴ�.
// 5. ���� ī�带 �����ϰ� ���� �� ���� ���� ���� ������ ������ �¸� Ʋ���� �й�
// 6. ī��� 1�� ���� ���� K�� ���� ����
// 7. ������ �����̵� > ���̾� > ��Ʈ > Ŭ�ι� ������ �����ϴ�.


void Shuffle(std::vector<CCard>& Cards)
{
	std::random_device rd;
	// std::mt19937 mt(1234); 1234�� �õ�(seed)���̶�� �ؼ� �ʱ⿡ �־����� Ű ��, 
	// ���� �õ�� ���� ���ڰ� �����ϰ� ���´�.
	std::mt19937 mt(rd.entropy());// �õ� ���� �������� �ο��ؼ� ���� ���� ����� ������ �ʴ´�.-> ���� ����
	std::uniform_int_distribution<int> dist(0,Cards.size()-1);//������ 0~51���� ����

	for (int i = 0; i < 100; i++)
	{
		int firstIndex = dist(mt);
		int secondIndex = dist(mt);

		CCard temp = Cards[firstIndex];
		Cards[firstIndex] = Cards[secondIndex];
		Cards[secondIndex] = temp;
	}
}

// �Լ��̸� : CompareCard
// �Ķ��Ÿ : const CCard& CardA, const CCard& CardB
// ��ȯ�� : bool
// �Լ���� : CardA�� CardB�� ���Ͽ� CardA�� ũ�ٸ� true, CardB�� ũ�� false ��ȯ

bool CompareCard(const CCard& CardA, const CCard& CardB)
{
	int ScoreA = CardA.m_number * 10 + CardA.m_mark;
	int ScoreB = CardB.m_number * 10 + CardB.m_mark; // number�� ���� �ڸ� mark�� ���� �ڸ��� �־ number�� ���� ���ϰ� mark�� ��  

	return ScoreA > ScoreB; // A�� ũ�� true, B�� ũ�� false�� ��ȯ
}

int main()
{
	std::vector<CCard> Cards;// CCard�� ��� ���͸� ����. (ī�� ���� �����ϴ� ����)

	for (int i = CardMark::Clover; i < CardMark::MaxMark; ++i)  // Clover ���� MaxMark ���� ���̸� ��ȸ
	{
		//1,2,3,4,5,6,7,8,9,10,J(11),Q(12),K(13)
		for (int j = 1; j <= 13; ++j)
		{
			CCard card;
			card.m_mark = (CardMark)i;
			card.m_number = j;
			Cards.push_back(card);// ���� ���̿� ���ڸ� ���� ī�带 �����ϰ�, �ش� ���� �Ҵ��� �� Cards ���Ϳ� �߰�
		} 
	}// ���� ������ ���� �� ���̺��� 1���� 13������ ���ڸ� ���� ī�带 �����ϰ� Cards ���Ϳ� �߰�

	Shuffle(Cards);


	bool bRun = true;
	int i = 0;

	while (bRun)
	{
		printf("ù��° ī��� %s �Դϴ�.\n", Cards[i].GetCardStr().c_str());

		int input = 0;// input = 1 �̸� Cards[0] ����.
		printf("�ι�° ī�尡 ������ 0, ������ 1�� �Է����ּ��� : ");
		scanf_s("%d", &input);
		system("cls");// clear screen

		printf("ù��° ī��� %s �Դϴ�.\n", Cards[i].GetCardStr().c_str());
		printf("�ι�° ī��� %s �Դϴ�.\n", Cards[i + 1].GetCardStr().c_str());
		// IsFirstHigh = 1 �̸� Cards[0] ����.
		bool IsFirstHigh = CompareCard(Cards[i], Cards[i + 1]);// i��° ī��� �� ������° ī�带 CompareCard �Լ����� ��
															   // i��° ī�尡 ũ�� true(1)�� ��ȯ�Ѵ�
		if (IsFirstHigh == input) 
		{
			printf("�����.\n");// input ���� ī���� ũ�⸦ ���� ���� ������ ����
		}
		else
		{
			printf("Ʋ�ȴ�.\n");
		}

		i += 2;
	}


	//for (CCard& card : Cards)//Cards ���Ϳ� �ִ� ������ ī�忡 ���� �ݺ�
	//{
	//	card.printCard(); // ������ ī�带 ���
	//}
}
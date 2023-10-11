#include <stdio.h>
#include <vector>
#include <string>
#include "Card.h"
#include <random>

// 1. 52개의 카드로 게임을 합니다.
// 2. 52개의 카드를 무작위로 섞습니다.
// 3. 게임이 시작되면 카드 하나를 오픈합니다
// 4. 플레이어는 다음카드가 오픈 된 카드보다 높은 카드인지 낮은 카드인지에 대해 배팅 합니다.
// 5. 다음 카드를 오픈하고 높은 지 낮은 지에 대한 선택이 맞으면 승리 틀리면 패배
// 6. 카드는 1이 가장 낮고 K가 가장 높다
// 7. 문양은 스페이드 > 다이아 > 하트 > 클로버 순으로 높습니다.


void Shuffle(std::vector<CCard>& Cards)
{
	std::random_device rd;
	// std::mt19937 mt(1234); 1234는 시드(seed)값이라고 해서 초기에 주어지는 키 값, 
	// 같은 시드면 랜덤 숫자가 일정하게 나온다.
	std::mt19937 mt(rd.entropy());// 시드 값도 랜덤으로 부여해서 거의 같은 결과가 나오지 않는다.-> 난수 생성
	std::uniform_int_distribution<int> dist(0,Cards.size()-1);//범위를 0~51까지 지정

	for (int i = 0; i < 100; i++)
	{
		int firstIndex = dist(mt);
		int secondIndex = dist(mt);

		CCard temp = Cards[firstIndex];
		Cards[firstIndex] = Cards[secondIndex];
		Cards[secondIndex] = temp;
	}
}

// 함수이름 : CompareCard
// 파라메타 : const CCard& CardA, const CCard& CardB
// 반환값 : bool
// 함수기능 : CardA와 CardB를 비교하여 CardA가 크다면 true, CardB가 크면 false 반환

bool CompareCard(const CCard& CardA, const CCard& CardB)
{
	int ScoreA = CardA.m_number * 10 + CardA.m_mark;
	int ScoreB = CardB.m_number * 10 + CardB.m_mark; // number를 십의 자리 mark를 일의 자리로 넣어서 number를 먼저 비교하고 mark를 비교  

	return ScoreA > ScoreB; // A가 크면 true, B가 크면 false가 반환
}

int main()
{
	std::vector<CCard> Cards;// CCard를 담는 벡터를 생성. (카드 덱을 저장하는 공간)

	for (int i = CardMark::Clover; i < CardMark::MaxMark; ++i)  // Clover 부터 MaxMark 까지 무늬를 순회
	{
		//1,2,3,4,5,6,7,8,9,10,J(11),Q(12),K(13)
		for (int j = 1; j <= 13; ++j)
		{
			CCard card;
			card.m_mark = (CardMark)i;
			card.m_number = j;
			Cards.push_back(card);// 현재 무늬와 숫자를 가진 카드를 생성하고, 해당 값을 할당한 후 Cards 벡터에 추가
		} 
	}// 이중 루프를 통해 각 무늬별로 1부터 13까지의 숫자를 가진 카드를 생성하고 Cards 벡터에 추가

	Shuffle(Cards);


	bool bRun = true;
	int i = 0;

	while (bRun)
	{
		printf("첫번째 카드는 %s 입니다.\n", Cards[i].GetCardStr().c_str());

		int input = 0;// input = 1 이면 Cards[0] 높다.
		printf("두번째 카드가 높으면 0, 낮으면 1을 입력해주세요 : ");
		scanf_s("%d", &input);
		system("cls");// clear screen

		printf("첫번째 카드는 %s 입니다.\n", Cards[i].GetCardStr().c_str());
		printf("두번째 카드는 %s 입니다.\n", Cards[i + 1].GetCardStr().c_str());
		// IsFirstHigh = 1 이면 Cards[0] 높다.
		bool IsFirstHigh = CompareCard(Cards[i], Cards[i + 1]);// i번째 카드와 그 다음번째 카드를 CompareCard 함수에서 비교
															   // i번째 카드가 크면 true(1)을 반환한다
		if (IsFirstHigh == input) 
		{
			printf("맞췄다.\n");// input 값과 카드의 크기를 비교한 값이 같으면 맞춤
		}
		else
		{
			printf("틀렸다.\n");
		}

		i += 2;
	}


	//for (CCard& card : Cards)//Cards 벡터에 있는 각각의 카드에 대해 반복
	//{
	//	card.printCard(); // 각각의 카드를 출력
	//}
}
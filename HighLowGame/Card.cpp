#include "Card.h"
#include <stdio.h>
#include <string>

CCard::CCard(CardMark mark, int number) :m_mark(mark), m_number(number) // 생성자는 mark와 number 두가지 멤버변수
{
	// 카드 객체를 생성 할 때 초기 값을 지정할 수 있다.
}

std::string CCard::GetMarkStr()//카드의 무늬를 문자열로 반환하는 함수
{
	switch (m_mark) // m_mark 값에 따라서 해당하는 문자열로 반환
	{
	case Clover:
		return "Clover";
		break;
	case Heart:
		return "Heart";
		break;
	case Dia:
		return "Dia";
		break;
	case Spade:
		return "Spade";
		break;
	}

	return "None"; // 해당하는 값이 없다면 None으로 반환
}

std::string CCard::GetCardStr()
{

	return GetMarkStr() + "[" + std::to_string(m_number) + "]";
}

void CCard::printCard() // 카드의 무늬와 번호를 형식에 맞춰 출력
{
	printf("%s[%d]\n", GetMarkStr().c_str(), m_number);// GstMarkStr을 호출하여 무늬를 문자열로 받아와서 출력
}
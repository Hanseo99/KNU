#pragma once
#include <string>

enum CardMark // 카드의 무늬를 열거형으로 정의 None = 0, Clover = 1, Heart = 2, Dia = 3, Spade = 4, MaxMark = 5의 값을 가짐
{
	None = 0,
	Clover,
	Heart,
	Dia,
	Spade,
	MaxMark
};

class CCard // 카드의 클래스를 정의
{
public:
	CCard(CardMark mark = CardMark::None, int number = 0);  // 생성자는 mark와 number 두가지 멤버변수
	
	// 카드 객체를 생성 할 때 초기 값을 지정할 수 있다.
	

	std::string GetMarkStr();//카드의 무늬를 문자열로 반환하는 함수

	std::string GetCardStr();
	

	void printCard(); // 카드의 무늬와 번호를 형식에 맞춰 출력
	

public:
	CardMark m_mark;
	int m_number;
};
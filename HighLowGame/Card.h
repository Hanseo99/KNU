#pragma once
#include <string>

enum CardMark // ī���� ���̸� ���������� ���� None = 0, Clover = 1, Heart = 2, Dia = 3, Spade = 4, MaxMark = 5�� ���� ����
{
	None = 0,
	Clover,
	Heart,
	Dia,
	Spade,
	MaxMark
};

class CCard // ī���� Ŭ������ ����
{
public:
	CCard(CardMark mark = CardMark::None, int number = 0);  // �����ڴ� mark�� number �ΰ��� �������
	
	// ī�� ��ü�� ���� �� �� �ʱ� ���� ������ �� �ִ�.
	

	std::string GetMarkStr();//ī���� ���̸� ���ڿ��� ��ȯ�ϴ� �Լ�

	std::string GetCardStr();
	

	void printCard(); // ī���� ���̿� ��ȣ�� ���Ŀ� ���� ���
	

public:
	CardMark m_mark;
	int m_number;
};
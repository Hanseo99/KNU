#include "Card.h"
#include <stdio.h>
#include <string>

CCard::CCard(CardMark mark, int number) :m_mark(mark), m_number(number) // �����ڴ� mark�� number �ΰ��� �������
{
	// ī�� ��ü�� ���� �� �� �ʱ� ���� ������ �� �ִ�.
}

std::string CCard::GetMarkStr()//ī���� ���̸� ���ڿ��� ��ȯ�ϴ� �Լ�
{
	switch (m_mark) // m_mark ���� ���� �ش��ϴ� ���ڿ��� ��ȯ
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

	return "None"; // �ش��ϴ� ���� ���ٸ� None���� ��ȯ
}

std::string CCard::GetCardStr()
{

	return GetMarkStr() + "[" + std::to_string(m_number) + "]";
}

void CCard::printCard() // ī���� ���̿� ��ȣ�� ���Ŀ� ���� ���
{
	printf("%s[%d]\n", GetMarkStr().c_str(), m_number);// GstMarkStr�� ȣ���Ͽ� ���̸� ���ڿ��� �޾ƿͼ� ���
}
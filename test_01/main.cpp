#include <stdio.h>
#include <iostream>

unsigned int GetStringLength(const wchar_t* _pString)
{
	int i = 0;

	while (1)
	{
		wchar_t c = *(_pString + i);//�������� �ּҰ��� ���ڸ� ����
		//if (c == 0)
		if (c == '\0')
		{
			break;
		}
		++i;
	}
	return i;
}

int main()
{
	//2�� ��� ����ϱ�(0~100)
	for (int i = 0; i <= 100; i++)
	{
		if(i%2==0)
		{
			printf("%d ", i);
		}
	}
	printf("\n");

	//n�� ���� �ϳ��� �Է� �ޱ�
	//n�� ��� ����ϱ�
	int n = 0;
	printf("���ڸ� �Է��Ͻÿ� : ");
	scanf_s("%d", &n);
	printf("n�� ����� : ");
	for (int i = 1; i <= 100; i++)
	{
		if (n * i <= 100) 
		{
			printf("%d ", n * i);
		}
	}
	printf("\n");

	//(0~100) 2�� ����� ���� ���
	int cnt = 0;
	for (int i = 1; i <= 100; i++)
	{
		if (i % 2 == 0)
		{
			cnt++;
		}
	}
	printf("0���� 100���� 2�� ����� ������ : %d\n",cnt);

	//abcdef�� ������ ����ϱ� -->fedcba
	wchar_t szWChar[20] = L"abcdef";
	int len = 0;
	len = GetStringLength(szWChar);
	printf("���ڿ��� �ݴ�� ��� : ");
	for (int i = len - 1; i >= 0; i--) 
	{   
		printf("%c", szWChar[i]);
	}
	printf("\n");

	//wchar_t������ ���� �Է� �ޱ�
	wchar_t szWCharInput[20] = L"";
	printf("���ڿ��� �Է��Ͻÿ� : ");
	wscanf_s(L"%ls", szWCharInput, (unsigned)_countof(szWCharInput));
	wprintf(L"szWCharInput=%s\n", szWCharInput);

	//�Է� ���� ���ڿ����� 'a'���� ���� ���
	int cnta = 0;
	for (int i = 0; i <= GetStringLength(szWCharInput); i++)
	{
		wchar_t c = *(szWCharInput + i);
		if (c == 'a')//if(szWCharInput[i]=='a')
		{
			cnta++;
		}
	}
	printf("�Է¹��� ���ڿ����� a������ ���� : %d\n", cnta);
}
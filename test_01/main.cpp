#include <stdio.h>
#include <iostream>

unsigned int GetStringLength(const wchar_t* _pString)
{
	int i = 0;

	while (1)
	{
		wchar_t c = *(_pString + i);//순차적인 주소값에 문자를 저장
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
	//2의 배수 출력하기(0~100)
	for (int i = 0; i <= 100; i++)
	{
		if(i%2==0)
		{
			printf("%d ", i);
		}
	}
	printf("\n");

	//n에 숫자 하나를 입력 받기
	//n의 배수 출력하기
	int n = 0;
	printf("숫자를 입력하시오 : ");
	scanf_s("%d", &n);
	printf("n의 배수는 : ");
	for (int i = 1; i <= 100; i++)
	{
		if (n * i <= 100) 
		{
			printf("%d ", n * i);
		}
	}
	printf("\n");

	//(0~100) 2의 배수의 갯수 출력
	int cnt = 0;
	for (int i = 1; i <= 100; i++)
	{
		if (i % 2 == 0)
		{
			cnt++;
		}
	}
	printf("0부터 100까지 2의 배수의 개수는 : %d\n",cnt);

	//abcdef를 역으로 출력하기 -->fedcba
	wchar_t szWChar[20] = L"abcdef";
	int len = 0;
	len = GetStringLength(szWChar);
	printf("문자열을 반대로 출력 : ");
	for (int i = len - 1; i >= 0; i--) 
	{   
		printf("%c", szWChar[i]);
	}
	printf("\n");

	//wchar_t형으로 문자 입력 받기
	wchar_t szWCharInput[20] = L"";
	printf("문자열을 입력하시오 : ");
	wscanf_s(L"%ls", szWCharInput, (unsigned)_countof(szWCharInput));
	wprintf(L"szWCharInput=%s\n", szWCharInput);

	//입력 받은 문자열에서 'a'문자 갯수 출력
	int cnta = 0;
	for (int i = 0; i <= GetStringLength(szWCharInput); i++)
	{
		wchar_t c = *(szWCharInput + i);
		if (c == 'a')//if(szWCharInput[i]=='a')
		{
			cnta++;
		}
	}
	printf("입력받은 문자열에서 a문자의 개수 : %d\n", cnta);
}
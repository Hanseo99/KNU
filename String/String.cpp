#include <stdio.h>
#include <iostream>
#include <string>
#include <sstream>

// 네임스페이스는 내부 식별자로 여러개의 라이브러리를 사용할 때 이름 간의 충돌을 방지하기 위해 사용
using namespace std; // std 이름공간을 가져오겠다. std 라이브러리 함수 앞에 std를 붙히지 않아도 된다.

int main()
{
	// String이란?
	// -C++ STL에서 제공하는 클래스로, 문자열을 다루는 클래스
	// C에서는 char* 또는 char[]의 형태로 문자열을ㅇ 다루었다면, C++에서는 문자열을 하나의 변수 타입처럼 사용
	// 문자열을 다양하고 쉽게 다룰 수 있게 해준다.
	// char*,char[]과 다르게 문자열의 끝에 "\0' 문자가 들어가지 않으면 문자열의 길이를 동적으로 변경 가능하다.

	wchar_t chars[20] = L"abcdef";
	int result = wcscmp(chars, L"abcdef");
	wcscpy_s(chars, L"ghijkl");

	// 변수명 : std::string
	// 변수 이름 : strA
	// 기본값 : ("abcdef")
	std::string strA("abcdefg");
	printf("strA = %s\n", strA.c_str());// 문자열 출력은 c_str()을 사용하여 출력
	size_t size = strA.size();// 문자열 크기 구하기
	size_t len = strA.length();// 문자열 길이 구하기

	std::string A("12");
	std::string B("34");
	A += B;//A에다가 B를 붙힌다.
	printf("A = %s, B = %s\n", A.c_str(), B.c_str());
	A = B;//A에 B를 대입한다.
	printf("A = %s, B = %s\n", A.c_str(), B.c_str());
	if (A == B)// 문자열 비교 연산자 가능
	{
		printf("A와 B는 같다\n");
	}

	std::wstring wstr;//wchar_t형 string
	// auto : 대입한 값의 형태에 따라 자동으로 변수형이 설정된다.
	auto stirngS = "abcdef"s;// string 문자형을 표기

	double d = 3.14;
	string strD = to_string(d);// 숫자->문자 변환
	printf("strD = %s\n", strD.c_str());

	string toParse = " 123USD";
	size_t index = 0;
	// stoi(int), stof(float), stod(double), stol(long)
	int nResult = stoi(toParse, &index); // 문자 -> 숫자로 변환
	printf("stoi result = %d\n", nResult); // nResult : 변환된 숫자
	printf("toParse index Character = %c\n", toParse[index]); // index : Parse가 불가능한 시작포인트

	string findStr = "123SABC456SORRY";
	int nPointL = findStr.find('S');// 왼쪽에서부터 문자 찾기
	printf("Find Point[%d] Character = %c\n", nPointL, findStr[nPointL]); // nPointL : 찾은 문자열 위치
	int nPointR = findStr.rfind('S');// 오른쪽에서부터 문자 찾기
	printf("Find Point[%d] Character = %c\n", nPointR, findStr[nPointR]);// nPointR : 찾은 문자열 위치 

	string strleft = findStr.substr(0, nPointL);// 문자열 잘라오기 0 부터 nPointL 길이 만큼
	string strcenter = findStr.substr(nPointL, nPointR - nPointL);
	string strright = findStr.substr(nPointR, findStr.length() - nPointR);
	printf("strleft = %s\nstrcenter = %s\nstrright = %s\n", strleft.c_str(), strcenter.c_str(), strright.c_str());

	string testStr = "1,2,3,4,5,6,7,8,9";
	stringstream ssTest(testStr);//string 문자열을 stringstream 변수형태로 만든다.
	string line;// 읽어 온 string 담아 둘 변수

	// ssTest를 왼쪽 부터','를 기준으로 문자를 읽어서 line에 넣는다.
	// getline 결과가 false(더 이상 읽을 문자열이 없다)면 종료
	while (getline(ssTest, line, ','))
	{
		printf("line = %s\n", line.c_str());
	}

	// 스트링에서 특정 문자 제거
	// remove(testStr.begin(),testStr.end(),',');
	testStr.erase(remove(testStr.begin(), testStr.end(), ','), testStr.end());
	printf("testStr = %s\n", testStr.c_str());
}
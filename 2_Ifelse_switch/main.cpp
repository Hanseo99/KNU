#include <iostream>
#include <stdio.h> // standard input output
#include <bitset>

// c++ 의 컴파일
// c++에서 사람이 작성한 소스코드를 컴퓨터가 읽을 수 있는 코드로 변환하여 실행할 수 있는 파일로 변환하는 과정 

// 1. 전처리(Preprocessing)단계 : #include 와 #define 과 같은 전처리기 매크로들을 처리하는 단계
// 2. 컴파일(Compile)단계 : 각각의 소스 파일들을 어셈블리 명령어로 변환하는 단계
// 3. 어셈블(Assemble)단계 : 어셈블리 코드들을 실제 기계어로 이루어진 목적 코드(Object file)로 변환하는 단계
// 4. 링킹(Linking)단계 : 각각의 목적 코드들을 한데 모아서 하나의 실행 파일을 생성하는 단계

// 메모리 영역
// 1.Code 영역 : 실행할 코드가 저장되어 있는 영역(기계어로 존재)
// 2.Data 영역 : 전역변수, Static 변수들이 저장, 프로세스가 종료될 때 까지 메모리에 저장됨
// 3.Stack 영역: 지역변수, 매개변수들이 저장, 함수가 호출되면 생성되고 함수가 종료되면 시스템에 반환
// 4.Heap 영역 : malloc 또는 new 함수에 의해서 동적으로 할당되는 영역, malloc() 또는 new 연산자로 할당, free() 또는 delete 연산자로 해제

#define LEVEL1_REWARD_10 0b00000001;//1
#define LEVEL1_REWARD_20 0b00000010;//2
#define LEVEL1_REWARD_30 0b00000100;//4
#define LEVEL1_REWARD_40 0b00001000;//8
#define LEVEL1_REWARD_50 0b00010000;//16
#define LEVEL1_REWARD_60 0b00100000;//32



int main()
{
	//{	//int a = 0;
	//	//std::cin >> a;
	//	//std::cout << a << "를 입력하셨습니다.";
	//}

	//{
	//	// %d : 부호 있는 10진수 정수
	//	// %I64d : 부호 있는 10진수 정수(8Byte)
	//	// %u : 부호 없는 10진수 정수
	//	// %I64u : 부호 없는 10진수 정수(8Byte)
	//	// %f : 부호 있는 실수(12.3456789)
	//	// %e, %E : 부호 있는 실수(1.23456789e+001)
	//	// %i : 부호 있는 10진수 정수(10진수/8진수/16진수 입력 가능)
	//	// %x : 부호 없는 16진수 정수(0123456789abcdef)
	//	// %X : 부호 없는 16진수 정수(0123456789ABCDEF)
	//	// %o : 부호 없는 8진수
	//	// %p : 포인터 값을 16진수로 표기
	//	// %c : 단일 문자 출력

	//	/*int a = 0, b = 0;
	//	scanf_s("%d %d", &a, &b);
	//	printf("a더하기 b는? %d",a+b);*/
	//}

	/*bool bResult = true;

	if (bResult)
	{
		printf("참이다.");
	}
	else
	{
		printf("거짓이다.");
	}*/

	//int Score = 0;
	//printf("Score를 입력해주세요 : ");
	//scanf_s("%d", &Score);

	//printf("Score = %d\n", Score);

	//if (Score >= 90)
	//{
	//	printf("A학점");
	//}
	//else if (Score >= 80)
	//{
	//	printf("B학점");
	//}
	//else if (Score >= 70)
	//{
	//	printf("C학점");
	//}
	//else if (Score >= 60)
	//{
	//	printf("D학점");
	//}
	//else if (Score >= 50)
	//{
	//	printf("E학점");
	//}
	//else
	//{
	//	printf("F학점");
	//}

//	int backNumber = 0;
//	scanf_s("%d", &backNumber);
//
//	switch (backNumber)
//	{
//	case 11:
//	{
//		//11일 때 실행
//		printf("포수");
//	}
//	break;
//
//	case 9:
//	{
//		//11일 때 실행
//		printf("투수");
//	}
//	break;
//
//	default:
//	{
//		//위에 case가 모두 아니면 실행
//		printf("후보");
//	}
//		break;
//	}
//

	//int light = 0;
	////scanf_s로 light값을 입력
	////light가 1이면 "파랑" 출력(printf)
	////light가 0이면 "빨강" 출력(printf)
	//scanf_s("%d", &light);
	//if (light == 1)
	//{
	//	printf("파랑\n");
	//}
	//else if (light == 0)
	//{
	//	printf("빨강\n");
	//};

	//int nInput = 0;
	////scanf_s로 nInput값을 입력
	////nInput 값이 100보다 크면 "100보다 크다" 출력(printf)
	////nInput 값이 100보다 작으면 "100보다 작다" 출력(printf)
	//scanf_s("%d", &nInput);
	//if (nInput > 100)
	//{
	//	printf("100보다 크다.\n");
	//}
	//else if (nInput == 100)
	//{
	//	printf("100이다.\n");
	//}
	//else
	//{
	//	printf("100보다 작다.\n");
	//};

	//int myScore = 0, otherScore = 0;
	////scanf_s로 myScore,otherScore 값을 입력
	////myScore 가 otherScore보다 크면 "3점" 출력
	////myScore 가 otherScore 같으면 "1점" 출력
	////myScore 가 otherScore보다 작으면 "0점" 출력
	//scanf_s("%d  %d", &myScore ,&otherScore);
	//if (myScore > otherScore)
	//{
	//	printf("3점\n");
	//}
	//else if (myScore == otherScore)
	//{
	//	printf("1점\n");
	//}
	//else
	//{
	//	printf("0점\n");
	//};

	//int nCode = 0;
	//scanf_s로 nCode 값을 입력
	//nCode가 1이나 3이면 "남자" 출력
	//nCode가 2이나 4이면 "여자" 출력
	//scanf_s("%d", &nCode);
	//if (nCode == 1 || nCode == 3)
	//{
	//	printf("남자\n");
	//}
	//else if (nCode == 2 || nCode == 4)
	//{
	//	printf("여자\n");
	//};
	// 아래는 스위치를 이용//
	//switch (nCode)
	//{
	//case 1:
	//case 3:
	//{
	//	printf("남자\n");
	//}break;
	//case 2:
	//case 4:
	//{
	//	printf("여자\n");
	//}break;
	//default:
	//	break;
	//}
	//int nCode2 = 0;
	////scanf_s로 nCode2값을 입력
	////nCode2가 1이나 2이면 "2000년 이전 출생" 출력
	////nCode2가 3이나 4이면 "2000년 이후 출생" 출력
	//scanf_s("%d", &nCode2);
	//if (nCode2 == 1 || nCode2 == 2)
	//{
	//	printf("2000년 이전 출생\n");
	//}
	//else if (nCode2 == 3 || nCode2 == 4)
	//{
	//	printf("2000년 이후 출생\n");
	//};
	// 아래는 스위치를 이용//
	//switch (nCode2)
	//{
	//case 1:
	//case 2:
	//{
	//	printf("2000년 이전 출생\n");
	//}break;
	//case 3:
	//case 4:
	//{
	//	printf("2000년 이후 출생\n");
	//}break;
	//default:
	//	break;
	//}

	// 비트 연산자
	// C++ 11버전 부터 숫자 앞에 0b를 붙히면 2진법 표기 가능
	// 2진법 표기 : 앞에 0b를 붙힌다 (0b01011101)
	// 8진법 표기 : 앞에 0을 붙힌다 (0123)
	// 16진법 표기 : 앞에0x를 붙힌다 (0xFF) (A:10, B:11, C:12, D:13, E:14, F:15)
	

int A = 0b01011101;
int B = 0123;
int C = 0xFF;
printf("2진법(0b01011101) %d\n", A);
printf("8진법(0123) %d\n", B);
printf("16진법(0xFF) %d\n", C);

	// 비트 연산 기호	
	// 곱(&) : 둘 다 1이면 1, 아니면 0
	// 합(|) : 둘 중에 하나라도 1이면 1, 아니면 0
	// XOR(^) : 둘이 같으면 0, 아니면 1
	// 반전(~) : 0이면 1, 1이면 0
char bitNum = 0b01001010;
char bitResult = 0;
bitResult = bitNum & 0b11010100;
std::cout << std::bitset<8>(bitResult) << std::endl;//std::endl은 개행(printf에 \n과 같다)

bitResult = bitNum | 0b11010100;
std::cout << std::bitset<8>(bitResult) << std::endl;

bitResult = bitNum ^ 0b11010100;
std::cout << std::bitset<8>(bitResult) << std::endl;

bitResult =~0b11010100;
std::cout << std::bitset<8>(bitResult) << std::endl;

//10레벨 달성 보상
 bool isGetLevel10Reward = true;

//20레벨 달성 보상
 bool isGetLevel20Reward = true;

//30레벨 달성 보상
 bool isGetLevel30Reward = true;

//40레벨 달성 보상
 bool isGetLevel40Reward = true;

//50레벨 달성 보상
 bool isGetLevel50Reward = false;

//60레벨 달성 보상
 bool isGetLevel60Reward = false;

 
 char MyReward = 0b00000000;
 
 // 비트 1로 설정
 MyReward = MyReward | 0b00000010; // LEVEL1_REWARD_10;
 //0b01011001
 //0b00000001
 //0b01011001
 std::cout << "MyReward Set = " << std::bitset<8>(MyReward) << std::endl;

 // 비트 활성화 되어 있는 지 체크
 bool isEnable = false;
 //0b01011001
 //0b00000001
 //0b00000001
 isEnable = MyReward & 0b00000001;
 std::cout << "MyReward Check = " << isEnable << std::endl;

 // 비트 0으로 설정
 MyReward = MyReward & ~0b00000010;
 //0b10110011
 //0b11111101
 //0b10110001
 std::cout << "MyReward Set = " << std::bitset<8>(MyReward) << std::endl;
}



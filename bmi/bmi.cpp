#include <stdio.h>

float standardWeight(float height)// 정상 몸무게를 계산하는 함수
{
    return (height - 100) * 0.9;
}

float GetBMI(float weight, float standardWeight)//BMI를 계산하는 함수
{
    return (weight - standardWeight) * 100 / standardWeight;
}

enum InputType
{
    Quit = 0,
    CalculateBMI
};

void ScanfinputWH(float& W, float& H) // 키 몸무게 입력받는 함수
{
    printf("\n몸무게를 입력해주세요: ");
    scanf_s("%f", &W);
    printf("\n키를 입력해주세요: ");
    scanf_s("%f", &H);
}

void PrintBMIStatus(float BMI)//BMI를 판별하여 출력해주는 함수
{
    if (BMI <= 10)
    {
        printf("BMI: %f, 정상\n", BMI);
    }
    else if (BMI <= 20)
    {
        printf("BMI: %f, 과체중\n", BMI);
    }
    else
    {
        printf("BMI: %f, 비만\n", BMI);
    }
}

int main()
{
    bool bRun = true;

    while (bRun)
    {
        InputType nInput;
        printf("BMI를 계산 하시겠습니까? 0) 종료 1) 시작  ");
        scanf_s("%d", (int*)&nInput);

        switch (nInput)
        {
        case InputType::Quit: 
            bRun = false;
            break;

        case InputType::CalculateBMI:
            
            float weight, height;
            float stdWeight, BMI;

            ScanfinputWH(weight, height); // ScanfinputWH 함수를 이용해 weight,height에 값 입력

            stdWeight = standardWeight(height); // standardWeight함수를 이용해 입력받은 height값으로 정상 몸무게 계산
            
            BMI = GetBMI(weight, stdWeight); // GetBMI함수를 이용해 입력받은 weight값과 위에서 계산한 stdWeight값으로 BMI계산
            
            PrintBMIStatus(BMI); // PrintBMIStatus함수를 이용해 위에서 계산한 BMI값을 판별하여 출력
           
            break;

        default:
            break;
        }
    }

    return 0;
}

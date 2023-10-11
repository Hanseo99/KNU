#include <stdio.h>

float standardWeight(float height)// ���� �����Ը� ����ϴ� �Լ�
{
    return (height - 100) * 0.9;
}

float GetBMI(float weight, float standardWeight)//BMI�� ����ϴ� �Լ�
{
    return (weight - standardWeight) * 100 / standardWeight;
}

enum InputType
{
    Quit = 0,
    CalculateBMI
};

void ScanfinputWH(float& W, float& H) // Ű ������ �Է¹޴� �Լ�
{
    printf("\n�����Ը� �Է����ּ���: ");
    scanf_s("%f", &W);
    printf("\nŰ�� �Է����ּ���: ");
    scanf_s("%f", &H);
}

void PrintBMIStatus(float BMI)//BMI�� �Ǻ��Ͽ� ������ִ� �Լ�
{
    if (BMI <= 10)
    {
        printf("BMI: %f, ����\n", BMI);
    }
    else if (BMI <= 20)
    {
        printf("BMI: %f, ��ü��\n", BMI);
    }
    else
    {
        printf("BMI: %f, ��\n", BMI);
    }
}

int main()
{
    bool bRun = true;

    while (bRun)
    {
        InputType nInput;
        printf("BMI�� ��� �Ͻðڽ��ϱ�? 0) ���� 1) ����  ");
        scanf_s("%d", (int*)&nInput);

        switch (nInput)
        {
        case InputType::Quit: 
            bRun = false;
            break;

        case InputType::CalculateBMI:
            
            float weight, height;
            float stdWeight, BMI;

            ScanfinputWH(weight, height); // ScanfinputWH �Լ��� �̿��� weight,height�� �� �Է�

            stdWeight = standardWeight(height); // standardWeight�Լ��� �̿��� �Է¹��� height������ ���� ������ ���
            
            BMI = GetBMI(weight, stdWeight); // GetBMI�Լ��� �̿��� �Է¹��� weight���� ������ ����� stdWeight������ BMI���
            
            PrintBMIStatus(BMI); // PrintBMIStatus�Լ��� �̿��� ������ ����� BMI���� �Ǻ��Ͽ� ���
           
            break;

        default:
            break;
        }
    }

    return 0;
}

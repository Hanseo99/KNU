#include <stdio.h>


void per ()

enum InputType
{
    Quit = 0,
    Calculate
};

int main()
{
    bool bRun = true;

    while (bRun)
    {
        InputType nInput;
        printf("�ҵ漼�� ����Ͻðڽ��ϱ�? 0) ���� 1) ����  ");
        scanf_s("%d", (int*)&nInput);

        switch (nInput)
        {
        case InputType::Quit:
            bRun = false;
            break;

        case InputType::Calculate:

            

            break;

        default:
            break;
        }
    }

    return 0;
}
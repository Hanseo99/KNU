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
        printf("소득세를 계산하시겠습니까? 0) 종료 1) 시작  ");
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
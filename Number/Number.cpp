#include <stdio.h>
#include <iostream>




int main() {
    int a, b;

    printf("숫자 하나를 입력하세요 : ");
    scanf_s("%d", &a);

    printf("숫자 하나를 더 입력하세요 : ");
    scanf_s("%d", &b);

    int R = 0;
    for (int i = a + 1; i < b; ++i)
    {
        R += i;
    }

    printf("%d과 %d사이의 모든 수를 더하면 %d입니다.\n", a, b, R);

}
#include <stdio.h>
#include <iostream>




int main() {
    int a, b;

    printf("���� �ϳ��� �Է��ϼ��� : ");
    scanf_s("%d", &a);

    printf("���� �ϳ��� �� �Է��ϼ��� : ");
    scanf_s("%d", &b);

    int R = 0;
    for (int i = a + 1; i < b; ++i)
    {
        R += i;
    }

    printf("%d�� %d������ ��� ���� ���ϸ� %d�Դϴ�.\n", a, b, R);

}
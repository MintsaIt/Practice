//�Լ��� Ȱ��

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int calc(int v1, int v2, int op)
{
    int result = 0;

    switch (op)
    {
    case 1:
        result = v1 + v2;
        break; //break�� case���� ����Ѵ�.
    case 2:
        result = v1 - v2;
        break;
    case 3:
        result = v1 * v2;
        break;
    case 4:
        if (v2 != 0) {
            result = v1 / v2;
        }
        else {
            // 0���� ������ ���� ó��
            printf("Error: Division by zero\n");
            result = 0;
        }
        break;

    default:
        printf("����: ��ȿ���� ���� operator\n");
        break;
    }

    return result;
}
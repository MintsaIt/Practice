//함수의 활용

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int calc(int v1, int v2, int op)
{
    int result = 0;

    switch (op)
    {
    case 1:
        result = v1 + v2;
        break; //break는 case마다 써야한다.
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
            // 0으로 나누기 오류 처리
            printf("Error: Division by zero\n");
            result = 0;
        }
        break;

    default:
        printf("에러: 유효하지 않은 operator\n");
        break;
    }

    return result;
}
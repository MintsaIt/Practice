#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<malloc.h>

int main() {
    int a = 3;
    int* b = &a;
    int** c = &b;
    int*** d = &c;

    printf("a�� ����� �� ==> %d \n", a);
    printf("b�� ����� �� ==> %p \n", b);
    printf("c�� ����� �� ==> %p \n", c);
    printf("d�� ����� �� ==> %p \n", d);

    printf("b�� ����Ű�� ������ �� ==> %d \n", *b);
    printf("c�� ����Ű�� ���� ������ �� ==> %d \n", **c);
    printf("d�� ����Ű�� ���� ������ �� ==> %d \n", ***d);

    return 0;
}
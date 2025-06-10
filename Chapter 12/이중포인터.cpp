#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<malloc.h>

int main() {
    int a = 3;
    int* b = &a;
    int** c = &b;
    int*** d = &c;

    printf("a에 저장된 값 ==> %d \n", a);
    printf("b에 저장된 값 ==> %p \n", b);
    printf("c에 저장된 값 ==> %p \n", c);
    printf("d에 저장된 값 ==> %p \n", d);

    printf("b가 가리키는 역참조 값 ==> %d \n", *b);
    printf("c가 가리키는 이중 역참조 값 ==> %d \n", **c);
    printf("d가 가리키는 삼중 역참조 값 ==> %d \n", ***d);

    return 0;
}
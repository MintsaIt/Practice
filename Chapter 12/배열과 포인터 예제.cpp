#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<malloc.h>

int main() {
    int data[][4] = { 1,2,3,4,5,6,7,8,9,10,11,12 };
    int (*p)[4];
    int i, j;

    p = data;

    printf("=== �迭 ===\n");
    for (i = 0; i < 3; i++) {
        for (j = 0; j < 4; j++) {
            printf("%d-%d : %d \t", i, j, data[i][j]); //������ ��� *(&data[i][j])�ε� �� �� ����.
        }
        printf("\n");
    }

    printf("=== ������ ===\n");
    for (i = 0; i < 3; i++) {
        for (j = 0; j < 4; j++) {
            printf("%d-%d : %d \t", i, j, p[i][j]);
        }
        printf("\n");
    }
}
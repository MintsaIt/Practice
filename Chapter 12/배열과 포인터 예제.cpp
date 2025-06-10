#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<malloc.h>

int main() {
    int data[][4] = { 1,2,3,4,5,6,7,8,9,10,11,12 };
    int (*p)[4];
    int i, j;

    p = data;

    printf("=== 배열 ===\n");
    for (i = 0; i < 3; i++) {
        for (j = 0; j < 4; j++) {
            printf("%d-%d : %d \t", i, j, data[i][j]); //마지막 요소 *(&data[i][j])로도 쓸 수 있음.
        }
        printf("\n");
    }

    printf("=== 포인터 ===\n");
    for (i = 0; i < 3; i++) {
        for (j = 0; j < 4; j++) {
            printf("%d-%d : %d \t", i, j, p[i][j]);
        }
        printf("\n");
    }
}
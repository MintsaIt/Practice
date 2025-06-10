#define _CRT_SECURE_NO_WARNINGS_
#include <stdio.h>
#include <malloc.h> //malloc을 이용한 메모리 최적화
int main() {
	int* p;
	int i, hap = 0;
	int cnt;

	printf("입력할 개수는?: ");
	scanf("%d", &cnt);

	p = (int*)malloc(sizeof(int) * cnt);

	for (i = 0; i < cnt; i++) {
		printf("%d번째 숫자 : ", i + 1);
		scanf("%d", p + i);
	}

	for (i = 0; i < cnt; i++) {
		hap = hap + p[i];
	}

	printf("입력 숫자의 합 ==> %d\n", hap);

	free(p);
}
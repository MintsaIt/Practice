#define _CRT_SECURE_NO_WARNINGS_
#include <stdio.h>
#include <malloc.h> //malloc�� �̿��� �޸� ����ȭ
int main() {
	int* p;
	int i, hap = 0;
	int cnt;

	printf("�Է��� ������?: ");
	scanf("%d", &cnt);

	p = (int*)malloc(sizeof(int) * cnt);

	for (i = 0; i < cnt; i++) {
		printf("%d��° ���� : ", i + 1);
		scanf("%d", p + i);
	}

	for (i = 0; i < cnt; i++) {
		hap = hap + p[i];
	}

	printf("�Է� ������ �� ==> %d\n", hap);

	free(p);
}
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main() {
	//���� ����
	char s[20];
	FILE* rfp;

	//���� ����
	rfp = fopen("D:\\CookC\\Ch11FileReadSample.txt", "r");

	//���� ���
	fgets(s, 20, rfp);

	printf("���Ͽ��� ���� ���ڿ� :");
	puts(s);

	//���� �ݱ�
	fclose(rfp);

	return 0;
}
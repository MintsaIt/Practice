#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main() {
	//변수 선언
	char s[20];
	FILE* rfp;

	//파일 오픈
	rfp = fopen("D:\\CookC\\Ch11FileReadSample.txt", "r");

	//파일 사용
	fgets(s, 20, rfp);

	printf("파일에서 읽은 문자열 :");
	puts(s);

	//파일 닫기
	fclose(rfp);

	return 0;
}
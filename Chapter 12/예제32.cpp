//사용자가 입력한 여러 숫자 중에서 짝수의 합계를 출력하는 프로그램.
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <malloc.h>

void main() {
	int* numberhouse;
	int 개수, i, j;
	scanf("입력할 개수는? : ", 개수);



	for(i=0;i<개수;i++){
		printf(i+1,"번째 숫자 : ");
		scanf(" % d", numberhouse[i]);
	}
		
}
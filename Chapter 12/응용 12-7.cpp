#include <stdio.h>
#include <malloc.h>
#include <string.h>

void main()
{
	char* p[3];
	char imsi[100];
	int i, size;

	for (i = 0; i < 3; i++) 
	{
		printf("%d번째 문자열 :", i + 1);
		gets_s(imsi); //임시 공간에 문자열을 입력한다.

		size = strlen(imsi);
		p[i] = (char*)malloc((sizeof(char) * size) + 1);
		// 입력한 길이 +1 크기의 메모리를 확보한다.

		strcpy(p[i], imsi); //입력한 문자열(imsi)의 내용을 메모리로 확보한 공간에 복사
		//strcpy(a,b): a에 있는 문자열 전체를 b로 복사 하는 함수.
	}

	printf("\n-- 입력과 반대로 출력(포인터) --\n");
	for (i = 2;i >= 0;i--) 
	{
		printf("%d : %s\n", i + 1, p[i]);
	}

	for (i = 0;i < 3; i++)
		free(p[i]);
}
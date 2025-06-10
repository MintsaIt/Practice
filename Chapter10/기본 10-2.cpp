#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int coffee_machine(int button)
{
	printf("\n#(자동)1.뜨거운 물을 준비한다\n");
	printf("#(자동)2.종이컵을 준비한다\n");

	switch (button)
	{
	case 1: printf("#(자동)3. 보통 커피를 탄다\n"); break;
	case 2: printf("#(자동)3. 설탕 커피를 탄다\n"); break;
	case 3: printf("#(자동)3. 블랙 커피를 탄다\n"); break;

	default: printf("(자동)#3. 아무거나 탄다\n"); break;
	}

	printf("#(자동)4. 물을 붓는다\n");
	printf("#(자동)5. 스푼으로 저어 녹인다\n");

	return 0;
}

void main()
{
	int coffee;
	int ret;

	printf("어떤 커피를 드릴까요? (1:보통, 2:설탕, 3:블랙)");
	scanf("%d", &coffee);

	ret = coffee_machine(coffee); //coffee_machine() 함수를 호출한다.

	printf("손님, 여기있습니다.\n\n");
}
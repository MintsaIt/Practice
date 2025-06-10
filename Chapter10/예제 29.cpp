
//1-45 중에서 6개의 숫자를 ★랜덤★으로 뽑는 프로그램
//질문: 1. short int lotto[6] = { 0, }; 이런 형식은 처음보는데??
//질문: 2. srand((unsigned)time(NULL)); 초기화는 NULL?

#include <stdio.h>
#include <stdlib.h> //srand, rand를 사용하기 위한 헤더파일
#include <time.h> //time을 사용하기 위한 헤더파일

int 숫자생성() //1~45사이의 숫자를 리턴하는 함수
{
	return rand() % 45 + 1; //rand 함수는 0~32767 중 하나를 임의로 반환.

}

void main()
{
	short int lotto[6] = {0,}; 
	//추첨된 숫자를 담을 배열. 크기가 6인 short int 배열을 선언한다는 뜻. 
	// 각 요소는 정수지만 크기가 작고 메모리를 적게 차지함(short int는 2바이트). 
	// { 0, }는 배열의 첫 번째 요소만 0으로 명시하고 나머지는 자동으로 0으로 초기화됨.
	// 모든 요소를 초기값 0으로 세팅한다는 뜻.

	int i, k, num; //반복변수 i,k와 숫자를 담을 변수 num 미리 선언

	char dup = 'N'; //중복인지 체크하기 위한 변수 미리 선언

	printf("**로또 추첨을 시작합니다.** \n\n");
	srand((unsigned)time(NULL)); 
	// rand()함수를 초기화하는 함수. 이게 없으면 계속 같은 숫자 뽑힘.
	// 현재 시간을 기반으로 rand() 함수의 시드(seed)를 설정해서
	// 매번 다른 난수를 생성하도록 초기화한다.
	
	//srand() 함수는 unsigned int 타입의 값을 인자로 받기 때문에, 명시적으로 형변환해준 것.
	//이건 선택 사항인데, 컴파일러 경고 없이 명확하게 하려는 습관.
	
	//unsigned int란? :부호가 없는 정수형(unsigned integer). 
	// 즉, 음수는 표현하지 않고 양수만 표현하는 정수 타입. 표현범위가 넓으나 int와 함께 연산시 충돌 가능성 있음.

	for (int i = 0; i < 6;) //숫자 6개 뽑는 것 반복
	{
		dup = 'N'; // dup 초기화
		num = 숫자생성(); //숫자 하나 뽑기

		for (k = 0; k < i; k++)
			if (lotto[k] == num)
				dup = 'Y'; //뽑은 숫자가 이전에 뽑은 숫자와 같은지 체크하고, 동일하면 중복 확인 변수에 'Y'대입.

		if (dup == 'N')
			lotto[i++] = num;

		else
			dup = 'N';
	}

	printf("추첨된 로또 번호 ==> ");
	for (i = 0;i < 6;i++)
	{
		printf("%d ", lotto[i]);
	}

	printf("\n\n");
}
#include <stdio.h>

void  main() {
	enum week{sun, mon, tue, wed, thu, fri, sat};
	enum week week;

	week = sat;
	
	if (week == sun)
		printf("오늘은 일요일입니다.\n");
	else
		printf("오늘은 일요일이 아닙니다.\n");
}
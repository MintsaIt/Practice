#include <stdio.h>

void  main() {
	enum week{sun, mon, tue, wed, thu, fri, sat};
	enum week week;

	week = sat;
	
	if (week == sun)
		printf("������ �Ͽ����Դϴ�.\n");
	else
		printf("������ �Ͽ����� �ƴմϴ�.\n");
}
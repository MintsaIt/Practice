//���� ���� �ֹ��Ҷ��� �Լ�

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int coffee_machine(int button)
{
	printf("\n#(�ڵ�)1.�߰ſ� ���� �غ��Ѵ�\n");
	printf("#(�ڵ�)2.�������� �غ��Ѵ�\n");

	switch (button)
	{
	case 1: printf("#(�ڵ�)3. ���� Ŀ�Ǹ� ź��\n"); break;
	case 2: printf("#(�ڵ�)3. ���� Ŀ�Ǹ� ź��\n"); break;
	case 3: printf("#(�ڵ�)3. �� Ŀ�Ǹ� ź��\n"); break;
	default: printf("#(�ڵ�)3. �ƹ��ų� ź��\n"); break;
	}

	printf("#(�ڵ�)4. ���� �״´�\n");
	printf("#(�ڵ�)5. ��Ǭ���� ���� ���δ�\n");

	return 0;
}

void main()
{
	int coffee;
	int ret;

	printf("A��, � Ŀ�Ǹ� �帱���? (1:����, 2:����, 3:��)");
	scanf("%d", &coffee);
	ret = coffee_machine(coffee); 
	printf("�մ�, �����ֽ��ϴ�.\n\n");

	printf("B��, � Ŀ�Ǹ� �帱���? (1:����, 2:����, 3:��)");
	scanf("%d", &coffee);
	ret = coffee_machine(coffee);
	printf("�մ�, �����ֽ��ϴ�.\n\n");

	printf("C��, � Ŀ�Ǹ� �帱���? (1:����, 2:����, 3:��)");
	scanf("%d", &coffee);
	ret = coffee_machine(coffee);
	printf("�մ�, �����ֽ��ϴ�.\n\n");
}

//�� �κп��� �Լ� coffee_machine�� ���ϰ�(������ �׻� 0��)�� 
// ret�� �����ϱ� ������, �� ���� ����ϰų� ����ϴ� �ڵ尡 ����. 
// �׷����� �ұ��ϰ� ȭ�鿡 ����� ������ ������ 
// ���� coffee_machine() �Լ� ���ο��� printf �Լ����� ����ؼ� 
// ���� ����ϰ� �ֱ� �����̾�.
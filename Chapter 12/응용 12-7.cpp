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
		printf("%d��° ���ڿ� :", i + 1);
		gets_s(imsi); //�ӽ� ������ ���ڿ��� �Է��Ѵ�.

		size = strlen(imsi);
		p[i] = (char*)malloc((sizeof(char) * size) + 1);
		// �Է��� ���� +1 ũ���� �޸𸮸� Ȯ���Ѵ�.

		strcpy(p[i], imsi); //�Է��� ���ڿ�(imsi)�� ������ �޸𸮷� Ȯ���� ������ ����
		//strcpy(a,b): a�� �ִ� ���ڿ� ��ü�� b�� ���� �ϴ� �Լ�.
	}

	printf("\n-- �Է°� �ݴ�� ���(������) --\n");
	for (i = 2;i >= 0;i--) 
	{
		printf("%d : %s\n", i + 1, p[i]);
	}

	for (i = 0;i < 3; i++)
		free(p[i]);
}
//������ ���.

#include <stdio.h>
#include <stdlib.h>

int main(int argc, char** argv) {
    // ���� ����
    int i, j;
    //char bf[120];
    // 1. ���� ������
    FILE* wfp;
    // 2. ���� ����
    wfp = fopen("D:\\CookC\\gugu.txt", "w");

    // ������ ���
    //3. ���� ���� ==> fprintf(����������, "��� ���� ����".....);
    for (i = 2; i <= 9; i++) {
        fprintf(wfp, " # ��%d�� # ", i);
        fprintf(wfp, "\n\n");
        for (i = 1; i <= 9; i++) {
            for (j = 2; j <= 9; j++) {
                fprintf(wfp, "%2d X %d = %2d ", j, i, i * j);
            }
            fprintf(wfp, "\n");
        }
    }

    // 4. ���� �ݱ�
    fclose(wfp);

    return 0;
}
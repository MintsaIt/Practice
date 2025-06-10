//교수님 답안.

#include <stdio.h>
#include <stdlib.h>

int main(int argc, char** argv) {
    // 변수 선언
    int i, j;
    //char bf[120];
    // 1. 파일 포인터
    FILE* wfp;
    // 2. 파일 오픈
    wfp = fopen("D:\\CookC\\gugu.txt", "w");

    // 구구단 출력
    //3. 파일 쓰기 ==> fprintf(파일포인터, "출력 형식 정의".....);
    for (i = 2; i <= 9; i++) {
        fprintf(wfp, " # 제%d단 # ", i);
        fprintf(wfp, "\n\n");
        for (i = 1; i <= 9; i++) {
            for (j = 2; j <= 9; j++) {
                fprintf(wfp, "%2d X %d = %2d ", j, i, i * j);
            }
            fprintf(wfp, "\n");
        }
    }

    // 4. 파일 닫기
    fclose(wfp);

    return 0;
}
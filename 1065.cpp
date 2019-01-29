#include <stdio.h>

int main() {
    int n;
    for(;;) {
        printf("정수를 입력하세요. ");
        scanf("%d", &n);
        if (n==0) break;
        if (n<0) puts("음수입니다.");
        else puts("양수입니다.");
    }
    return 0;
}

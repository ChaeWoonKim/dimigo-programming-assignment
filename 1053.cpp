#include <stdio.h>

int main() {
    double a;
    scanf("%lf", &a);
    switch((int)a) {
        case 4:
            puts("장학금을 받아가세요.");
            break;
        case 3:
            puts("다음 학기를 준비하세요.");
            break;
        case 2:
            puts("계절 학기에 등록하세요.");
            break;
        default: 
            puts("다음 학기에 재수강하세요.");
            break;
    }
    return 0;
}

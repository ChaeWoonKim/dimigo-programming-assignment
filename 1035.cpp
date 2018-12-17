#include <stdio.h>

int main() {
    int a, b, c, d;
    scanf("%d %d %d %d", &a, &b, &c, &d);
    printf("총점 %d점\n", a+b+c+d);
    printf("평균 %d점\n", (a+b+c+d)/4);
    return 0;
}

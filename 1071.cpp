#include <stdio.h>

int main() {
    int n, s=0, c=0;
    while (1) {
        scanf("%d", &n);
        if(n<0 || n>100) break;
        s += n, c++;
    }
    printf("합계 : %d점\n", s);
    printf("평균 : %.1lf점\n", (double)s/c);
    return 0;
}
#include <stdio.h>

int main() {
    int a1, a2, b1, b2;
    printf("민수의 키와 몸무게 입력 ");
    scanf("%d %d", &a1, &a2);
    printf("기영이의 키와 몸무게 입력 ");
    scanf("%d %d", &b1, &b2);
    printf("%d\n", (a1>b1)&&(a2>b2));
    return 0;
}

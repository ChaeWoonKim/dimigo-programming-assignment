#include <stdio.h>

int main() {
    int a, b;
    scanf("%d %d", &a, &b);
    printf("가로 = %d\n", a+5);
    printf("세로 = %d\n", b*2);
    printf("넓이 = %d\n", (a+5)*(b*2));
    return 0;
}

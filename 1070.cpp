#include <stdio.h>
int n, c[2];

int main() {
    while (1) {
        scanf("%d", &n);
        if (!n) break;
        c[n%2]++;
    }
    printf("홀수 : %d개\n", c[1]);
    printf("짝수 : %d개\n", c[0]);
    return 0;
}
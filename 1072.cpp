#include <stdio.h>

int main() {
    int n, s=0;
    while (n) {
        scanf("%d", &n);
        if (!n) break;
        s += (n%3) && (n%5);
    }
    printf("%d\n", s);
    return 0;
}
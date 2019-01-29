#include <stdio.h>

int main() {
    int n;
    while (1) {
        scanf("%d", &n);
        if (n==-1) break;
        if (n%3) continue;
        printf("%d\n", n/3);
    }
    return 0;
}
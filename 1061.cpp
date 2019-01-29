#include <stdio.h>

int main() {
    int n;
    scanf("%d", &n);
    if (n >= 50 || n < 10) puts("기타");
    else printf("%d0대\n", n/10);
    return 0;
}

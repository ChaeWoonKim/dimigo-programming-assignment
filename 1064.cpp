#include <stdio.h>

int main() {
    int n, s=0;
    scanf("%d", &n);
    while (n>0) {
        s += n--;
    }
    printf("%d\n", s);
    return 0;
}

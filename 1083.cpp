#include <stdio.h>

int main() {
    int a, b;
    scanf("%d %d", &a, &b);
    for (int i=a<b?a:b; i<=(a<b?b:a); ++i) {
        printf("%d", i);
        if (i<(a<b?b:a)) printf(" ");
    }
    return 0;
}

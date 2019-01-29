#include <stdio.h>

int main() {
    int n, c, s;
    for(c=s=n=0; n<100; ++c, s+=n) {
        scanf("%d", &n);
    }
    printf("%d\n%.1lf\n", s, (double)s/c);
    return 0;
}
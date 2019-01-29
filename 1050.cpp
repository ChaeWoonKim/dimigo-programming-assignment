#include <stdio.h>

int main() {
    double a, b;
    scanf("%lf %lf", &a, &b);
    if (a>=4 && b>=4) puts("A");
    else if (a>=3 && b>=3) puts("B");
    else puts("C");
    return 0;
}

#include <stdio.h>

int main() {
    float a, b;
    double c;
    scanf("%f %f %lf", &a, &b, &c);
    printf("%.3f\n%.3f\n%.3lf\n", a, b, c);
    return 0;
}

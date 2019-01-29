#include <stdio.h>

int main() {
    double w;
    scanf("%lf", &w);
    if (w<=50.8) puts("플라이급");
    else if (w<=61.23) puts("라이트급");
    else if (w<=72.57) puts("미들급");
    else if (w<=88.45) puts("크루저급");
    else puts("헤비급");
    return 0;
}

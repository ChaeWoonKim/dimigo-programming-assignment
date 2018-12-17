#include <stdio.h>

int main() {
    double c = 21.6, f = 110.3;
    printf("섭씨 %5.1lf도는 화씨 %.1lf도이다.\n", c, (c*1.8)+32);
    printf("화씨 %5.1lf도는 섭씨 %.1f도이다.\n", f, (f-32)*0.55);
    return 0;
}

#include <stdio.h>

int main() {
    int m, days[] = {31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};
    scanf("%d", &m);
    printf("%d\n", days[m-1]);
    return 0;
}

#include <stdio.h>

int main() {
    int y;
    scanf("%d", &y);
    if (y%400 == 0 || (y%4 == 0 && y%100)) puts("윤년");
    else puts("평년");
    return 0;
}

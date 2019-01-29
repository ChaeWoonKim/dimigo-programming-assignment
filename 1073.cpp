#include <stdio.h>

int main() {
    char c;
    int b, h;
    do {
        printf("밑변의 길이 = ");
        scanf("%d", &b);
        printf("높이 = ");
        scanf("%d", &h);
        printf("입력한 삼각형의 넓이는 %.1lf입니다.\n계속하시겠습니까?", b*h/2.0);
        scanf(" %c", &c);
        if (c == 'y' || c == 'Y') printf(" ");
    } while(c == 'y' || c == 'Y');
    return 0;
}
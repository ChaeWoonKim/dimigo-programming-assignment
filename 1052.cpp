#include <stdio.h>

int main() {
    char a;
    scanf(" %c", &a);
    switch (a) {
        case 'A':
            puts("매우잘함");
            break;
        case 'B':
            puts("잘함");
            break;
        case 'C':
            puts("보통임");
            break;
        case 'D':
            puts("노력요함");
            break;
        case 'F':
            puts("낙제");
            break;
        default:
            puts("잘못입력");
            break;
    }
    return 0;
}

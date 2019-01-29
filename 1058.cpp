#include <stdio.h>

int main() {
    int n;
    puts("1. 개");
    puts("2. 고양이");
    puts("3. 병아리");
    printf("영어로 알고 싶은 번호를 입력하세요. ");
    scanf("%d", &n);
    puts(n==1 ? "dog" : n==2 ? "cat" : n==3 ? "chick" : "I don't know.");
    return 0;
}

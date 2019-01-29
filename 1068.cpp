#include <stdio.h>

int main() {
    int n=1;
    char nat[5][50] = {"\n해당하는 나라가 없습니다.", "\n서울\n", "\n워싱턴\n", "\n동경\n", "\n북경\n"};
    while (0<n && n<5) {
        printf("1. 대한민국\n2. 미국\n3. 일본\n4. 중국\n수도를 알고 싶은 나라는 몇 번입니까? ");
        scanf("%d", &n);
        if (n<1 || n>4) n=0;
        puts(nat[n]);
    }
    return 0;
}
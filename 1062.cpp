#include <stdio.h>

int main() {
    int a, b, c, m;
    scanf("%d %d %d", &a, &b, &c);
    m = a<b?a<c?a:c:b<c?b:c;
    puts(m>=90?"A":m>=80?"B":m>=70?"C":"F");
    return 0;
}

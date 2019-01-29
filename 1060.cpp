#include <stdio.h>

int main() {
    int a, b, c;
    scanf("%d %d %d", &a, &b, &c);
    puts(a<40 || b<40 || c<40 ? "불합격" : a+b+c >= 180 ? "합격" : "불합격");    
    return 0;
}

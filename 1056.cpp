#include <stdio.h>

int main() {
    int n;
    scanf("%d", &n);
    puts(n==0?"zero":n<0?"minus":"plus");
    return 0;
}

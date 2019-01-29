#include <stdio.h>

int main() {
    int n=0;
    while (n++<15) {
        printf("%d%s", n, n<15?" ":"");
    }
    return 0;
}
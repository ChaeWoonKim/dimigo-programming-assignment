#include <stdio.h>

int main() {
    char gender;
    int age;
    scanf(" %c %d", &gender, &age);
    if (gender=='M') {
        if (age >= 18) puts("MAN");
        else puts("BOY");
    }
    else {
        if (age >= 18) puts("WOMAN");
        else puts("GIRL");
    }
    return 0;
}

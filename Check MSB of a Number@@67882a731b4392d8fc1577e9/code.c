// Your code here...
#include <stdio.h>

int main() {
    unsigned int number;

    printf("");
    scanf("%u", &number);

    if (number & (1 << 31)) {
        printf("Set");
    } else {
        printf("Not Set");
    }

    return 0;
}

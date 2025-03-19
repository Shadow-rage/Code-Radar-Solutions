// Your code here...
#include <stdio.h>

int main() {
    int number;

    printf("");
    scanf("%d", &number);

    if (number & (1 << 31)) {
        printf("Set");
    } else {
        printf("Not Set");
    }

    return 0;
}

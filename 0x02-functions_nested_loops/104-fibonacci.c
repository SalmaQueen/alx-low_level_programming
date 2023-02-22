#include <stdio.h>

int main() {
    int n = 98;
    int i;
    unsigned int  a = 1, b = 2, c;

    printf("%d, %d, ", a, b);

    for ( i = 3; i <= n; i++) {
        c = a + b;
        printf("%d", c);
        if (i < n) {
            printf(", ");
        }
        a = b;
        b = c;
    }

    printf("\n");
    return 0;
}


#include <stdio.h>

int main() {
    int prev1 = 1, prev2 = 2, current = 0, sum = 2;
    while (current <= 4000000) {
        current = prev1 + prev2;
        if (current % 2 == 0) {
            sum += current;
        }
        prev1 = prev2;
        prev2 = current;
    }
    printf("%d\n", sum);
    return 0;
}

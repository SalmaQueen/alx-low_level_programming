#include <stdio.h>

int main() {
    int a = 1;
    int b = 2;
    int sum = 2; // initialize sum to 2 to account for the first even number, 2
    
    while (b <= 4000000) {
        int c = a + b;
        if (c % 2 == 0) {
            sum += c;
        }
        a = b;
        b = c;
    }
    
    printf("%d\n", sum);
    
    return 0;
}

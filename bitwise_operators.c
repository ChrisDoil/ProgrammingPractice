#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

void calculate_the_maximum(int n, int k) {
    int a = 1, b = 1;
    int max_and = 0, max_or = 0, max_xor = 0;

    while (a <= n) {
        b = a + 1;
        while (b <= n) {
            if ((a & b) > max_and && (a & b) < k) {
                max_and = a & b;
            }

            if ((a | b) > max_or && (a | b) < k) {
                max_or = a | b;
            }

            if ((a ^ b) > max_xor && (a ^ b) < k) {
                max_xor = a ^ b;
            }
            b++;
        }
        a++;

    }
    printf("%d\n%d\n%d\n", max_and, max_or, max_xor);
    /* return max_and, max_or, max_xor; */ 
}

int main() {
    int n, k;
    int max_and, max_or, max_xor;

    scanf("%d %d", &n, &k);
    calculate_the_maximum(n, k);
    
    return 0;
}
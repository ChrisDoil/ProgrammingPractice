#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

#define min(a, b) ((a) < (b) ? (a) : (b))

int main() {

    int n, x, y, z;
    scanf("%d", &n);
        // Create a program that will print a pattern that "counts down" values in a box
        // Expand until enough rows are printed   

    int len = n * 2 - 1;

    for (int row = 0; row < len; row++) {
        for (int col = 0; col < len; col++) {

            int m = min(row, col);
            m = min(m, len - row - 1);
            m = min(m, len - col - 1);
            printf("%d ", n - m);

        }
        printf("\n");
    }
}
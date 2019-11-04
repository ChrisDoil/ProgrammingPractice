#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main () {
    
    int k, sum = 0;
    scanf("%d", &k);
    int *val = malloc(k * sizeof(int));

    for (int i = 0; i < k; i++) {
        scanf("%d", &val[i]);
        sum += val[i];
    }

    printf("%i\n", sum);

     return 0;
}
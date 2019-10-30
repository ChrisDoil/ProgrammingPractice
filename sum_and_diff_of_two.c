#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {

    int a;
    int b;

    float c;
    float d;

    scanf("%d %d", &a, &b);
    scanf("%f %f", &c, &d);

    printf("%d\n", a + b);
    printf("%.1f\n", c + d);



    return 0;
}
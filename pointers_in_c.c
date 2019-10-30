#include <stdio.h>
#include <stdlib.h>

void update(int *a, int *b) {
    int step_a = *a + *b;
    *b = abs(*a - *b);
    *a = step_a;
}  

int main() {    

    int a, b;
    int *pa = &a, *pb = &b;

    scanf("%d %d", &a, &b);
    update(pa, pb);
    printf("%d\n%d\n", a, b);

    return 0;
}
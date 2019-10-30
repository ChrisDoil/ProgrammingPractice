#include <stdio.h>

int max_of_four(int a, int b, int c, int d) {

    int my_integers[4] = {a, b, c, d};
    int count = 0;
    int max = 0;

    while (count < 4) {
        if (max < my_integers[count]) {
            max = my_integers[count];
        };
        count++;
        
    } 

    return max;
}

int main() {
    int a, b, c, d;
    scanf("%d %d %d %d", &a, &b, &c, &d);
    int ans = max_of_four(a, b, c, d);
    printf("%d", ans);

    return 0;
}
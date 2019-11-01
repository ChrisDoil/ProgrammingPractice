#include <stdio.h>
#include <math.h>
#include <string.h>
#include <stdlib.h>

int main () {

    char *s;
    s = malloc(1024 * sizeof(char));
    scanf("%[^\n]", s);
    s = realloc(s, strlen(s) + 1);

    // printf("%s\n", s);

    int count_one = 0, count_two = 0, count_three = 0, count_four = 0, count_five = 0, count_six = 0, count_seven = 0, count_eight = 0, count_nine = 0;
    for (int i = 0; i < strlen(s); i++) {
        if (s[i] == '0') {
        }  else if (s[i] == '1') {
            count_one++;
        } else if (s[i] == '2') {
            count_two++;
        } else if (s[i] == '3') {
            count_three++;
        } else if (s[i] == '4') {
            count_four++;
        } else if (s[i] == '5') {
            count_five++;
        } else if (s[i] == '6') {
            count_six++;
        } else if (s[i] == '7') {
            count_seven++;
        } else if (s[i] == '8') {
            count_eight++;
        } else if (s[i] == '9') {
            count_nine++;
        }
    }

    printf("%i %i %i %i %i %i %i %i %i\n", count_one, count_two, count_three, count_four, count_five, count_six, count_seven, count_eight, count_nine);
    return 0;
}
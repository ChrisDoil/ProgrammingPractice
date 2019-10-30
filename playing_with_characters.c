#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {

    char ch;
    char word[20];
    char sen[20];

    scanf("%c", &ch);
    scanf("%s", &word);
    scanf(" %[^\n]%*c", &sen);
    
    
    printf("%c\n", &ch);
    printf("%s\n", &word);
    printf("%s\n", &sen);






    return 0;
}
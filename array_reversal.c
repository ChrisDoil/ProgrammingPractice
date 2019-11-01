#include <stdio.h>
#include <stdlib.h>

int main () {
    int num, *arr, i;
    int temp = 0;

    scanf("%d", &num);
    arr = (int*) malloc(num * sizeof(int));
    for(i = 0; i < num; i++) {
        scanf("%d", arr + i);
    }

    /* Reverse */
    for(i = 0; i < (num / 2); i++) {
        temp = arr[i];
        arr[i] = arr[num - i - 1];
        arr[num - i - 1] = temp;
    }


    for(i = 0; i < num; i++) {
        printf("%d ", *(arr + i));
    
    }
    printf("\n");
    return 0;
}
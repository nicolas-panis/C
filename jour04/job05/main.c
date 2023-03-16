#include <stdio.h>
#include <string.h>

void min_max(int tab[], int* a, int* b){
    //*a = NULL;
    *b = NULL;
    while(*tab != '\0'){
        printf("tab: %d a: %d b: %d\n", *tab, *a, *b);
        if (*tab < *a){
            *a = *tab;
            printf("a change: %d\n", *a);
        }
        else if (*tab > *b){
            *b = *tab;
            printf("b change: %d\n", *b);
        }
        tab++;
    }
}

int main(void){
    int tab[] = {10, 22, 1, 25, 85, 12, 35, 264, 145};
    int* min;
    int* max;

    min_max(tab, min, max);
    printf("Min: %d, max: %d", *min, *max);

    return 0;
}
#include <stdio.h>

int main(void){
    int a = 5, b = 7;
    int* pointeur_a = &a;
    int* pointeur_b = &b;

    printf("addition: %d", *pointeur_a + *pointeur_b);
    
    return 0;
}
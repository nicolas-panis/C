#include <stdio.h>
#include <string.h>

void my_swap(int* a, int* b){
    int c = 0;
    c = *a;
    *a = *b;
    *b = c;
    printf("Nouvelles valeurs de a et b: %d et %d", *a, *b);
}

int main(void){
    int a = 0, b = 0;
    int* ap = &a;
    int* bp = &b;
    printf("Entrer la valeur de a: ");
    scanf("%d", &a);
    printf("Entrer la valeur de b: ");
    scanf("%d", &b);

    my_swap(ap,bp);

    return 0;
}
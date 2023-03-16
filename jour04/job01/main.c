#include <stdio.h>

int main(void){
    int a = 0;
    char b = 'B', c[12] = "bonjour toi\n";
    printf("adresse de a: %p\n", a);
    printf("adresse de B: %p\n", b);
    printf("adresse de c: %p\n", c);
    
    return 0;
}
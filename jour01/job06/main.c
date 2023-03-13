#include <stdio.h>
#include <stdlib.h>

int main(){
    float a = 12.14, b = 26.76;
    float division = a/b;
    printf("%.3f\n", division );
    float addition = a + b;
    printf("%.3f\n", addition );
    float soustraction = a - b;
    printf("%.3f\n", soustraction );
    float multiplication = a * b;
    printf("%.3f\n", multiplication );

    return 0;
}
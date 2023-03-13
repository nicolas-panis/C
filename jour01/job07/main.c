#include <stdio.h>
#include <stdlib.h>

int main(){
    float a = 0, b = 0;
    printf("Entrer la valeur de a: ");
    scanf("%f",&a);
    printf("Entrer la valeur de b: ");
    scanf("%f",&b);
    float division = a/b;
    printf("%.2f\n", division );
    float addition = a + b;
    printf("%.2f\n", addition );
    float soustraction = a - b;
    printf("%.2f\n", soustraction );
    float multiplication = a * b;
    printf("%.2f\n", multiplication );

    return 0;
}
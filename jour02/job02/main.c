#include <stdio.h>

float my_mul(float a, float b){
    return a * b;
}

float my_add(float a, float b){
    return a + b;
}

float my_sub(float a, float b){
    return a - b;
}

float my_div(float a, float b){
    return a/b;
}

int my_mod(int a, int b){
    return a % b;
}

int main(){
    float a = 5, b = 2;

    printf("%.2f\n",my_mul(a,b));
    printf("%.2f\n",my_add(a,b));
    printf("%.2f\n",my_sub(a,b));
    printf("%.2f\n",my_div(a,b));
    printf("%d\n",my_mod(a,b));

    return 0;
}
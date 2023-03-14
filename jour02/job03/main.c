#include <stdio.h>
#include <string.h>

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
    char sign[10];

    printf("Choissiez l'opération à effectuer parmis: mul - add - sub - div - mod\n");
    scanf("%s", sign);
    
    if (strcmp(sign, "mul") == 0){
        printf("%.2f\n",my_mul(a,b));
    }
    else if (strcmp(sign, "add") == 0){
        printf("%.2f\n",my_add(a,b));
    }
    else if (strcmp(sign, "sub") == 0){
        printf("%.2f\n",my_sub(a,b));
    }
    else if (strcmp(sign, "div") == 0){
        printf("%.2f\n",my_div(a,b));
    }
    else if (strcmp(sign, "mod") == 0){
        printf("%d\n",my_mod(a,b));
    }
    else{
        printf("Choix inconnu");
    }
    
    return 0;
}
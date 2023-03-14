#include <stdio.h>
#include <stdlib.h>
#include <string.h>

char * asciiToChar(int * tab, int len){
    char* result = malloc(len * sizeof(char));
    for (int i = 0; i < len; i++){
        result[i] = (char)tab[i];
    }
    return result;
}

int main(void){
    int tab[5] = {97, 100, 105, 101, 117};
    int len = sizeof(tab) / sizeof(tab[0]);
    char* res = asciiToChar(tab, len);

    for(int i = 0; i < len; i++){
        printf("%c", res[i]);
    }

    return 0;
}
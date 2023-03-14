#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int* charToAscii(char* str){
    int len = strlen(str);
    int* result = malloc(len * sizeof(int));
    for (int i = 0; i < len; i++){
        result[i] = (int)str[i];
    }
    return result;
}

int main(void){
    char* str = "aaa";
    int* res = malloc(strlen(str) * sizeof(int));
    res = charToAscii(str);
    for(int i = 0; i < strlen(str); i++){
        printf("%d\n", res[i]);
    }

    return 0;
}
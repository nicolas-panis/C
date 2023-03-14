#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int count_ea(char* str){
    int cpt = 0;
    for (int i = 0; i <= strlen(str); i++){
        if (str[i] == 'a' || str[i] == 'A' || str[i] == 'e' || str[i] == 'E' || str[i] == 'i' || str[i] == 'I' ){
            cpt++;
        }
    }
    return cpt;
}

int main(void){
    char* str = "abjieampsqAI";
    printf("Nombre de a, e et i dans %s: %d", str, count_ea(str));
}
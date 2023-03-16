#include <stdio.h>
#include <string.h>

int occurence(char* str){
    int cpt = 0;
    while (*str != '\0'){
        if (*str == 'A'){
            cpt++;
        }
        str++;
    }
    
    return cpt;
}

int main(void){
    char str[] = "Salut cA vA ?";

    printf("Nombre de A dans %s: %d", str, occurence(str));
    
    return 0;
}
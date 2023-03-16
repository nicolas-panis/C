#include <stdio.h>
//#include "header.h"

void my_putchar(char mychar){
    printf("%c", mychar);
}

void my_putstr(char* str){
    printf("%s", str);
    // for (int i = 0; i < strlen(str); i++){
    //     printf("%c", str[i]);
    // }
}
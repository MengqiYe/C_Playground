//
// Created by elsey on 2021/9/1.
//
#include "stdlib.h"

int main() {

    int *pi;

    pi = malloc(8);

    if (pi == NULL){
        printf("Out of memory!\n");
        exit(1);
    }




    int after = 0x11111111;

    return 0;
}
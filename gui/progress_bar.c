//
// Created by elsey on 2021/9/17.
//

#include <stdio.h>
#include <unistd.h>

int main (){
    int i = 0;
    for (i = 0; i < 10000; i++){
        sleep(.5);
        printf("\rIn progress %d", i/100);
        fflush(stdout);
    }
    printf("\n");
}
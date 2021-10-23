//
// Created by elsey on 2021/10/23.
//

#include <stdio.h>

typedef struct interface {
    int (*one)();

    int (*two)();

} ir_interface_t;

void (*greet)();

void greetMorning() {
    printf("Good, morning!");
//    if (one_half){
//        one_half;
//    }
}

void drinkWater() {
    printf("Have a class of warm water.");
}

void brushTeeth() {
    printf("Go brush teeth.");
}

static struct interface routine_interface = {
        .one = greetMorning,
        .two = drinkWater,
};

int main() {

    greet = greetMorning;
    greet();

//    routine_interface.one;
//    routine_interface.two;
    return 0;
}

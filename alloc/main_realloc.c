//
// Created by elsey on 2021/9/2.
//
#include <stdio.h>
#include "stdlib.h"

typedef struct rect{
    int x;
    int y;
    int w;
    int h;
}rect;

int main(){
    int max_array_size = 32;

    rect *detections = calloc(3, sizeof(rect));
    int actual_detection_count = 0;

    for (int i = 0; i < max_array_size; ++i) {
        detections = realloc(detections, sizeof(rect) * ++actual_detection_count);
//        rect r = detections[i];
//        r.x = 99;
        rect *r = &detections[i];
        r->x = i;
        printf("pointer address : %X\t", detections);

        for (int j = 0; j < i + 1; ++j) {
            printf("rect %d, x : %d\t", j, detections[j].x);
        }
        printf("\n");
    }
}

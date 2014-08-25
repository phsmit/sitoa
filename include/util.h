#pragma once

#include <cstdlib>
#include <sys/time.h>


int min(int a, int b){
    if (a < b) {
        return a;
    }
    return b;
}
int max(int a, int b){
    if (a > b) {
        return a;
    }
    return b;
}

void init_rand(const char * s) {
    unsigned int seed;
    if (strlen(s) > 0) {
        seed = strtoul(s, NULL, 16);
    }
    else {
        struct timeval time;
        gettimeofday(&time,NULL);
        seed = (time.tv_sec * 1000) + (time.tv_usec / 1000);

    }

    fprintf(stderr,"Rand init with seed %x\n", seed);

    srand(seed);
}
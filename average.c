#include <stdio.h>

int average(int payments[]){
    int i,all = 0;
    for(i = 0;i < 5;i++) {
        all += payments[i];
    }    
    return all / 5;
}


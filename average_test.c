#include <stdio.h>
#include "average.h"

int main(void) {
    int arr[5] = {0,1,2,3,4};
    if(average(arr) == 2){
        printf("ok\n");   
    } else {
        printf("bad\n");
    }
    int arr2[5] = {10,9,8,7,6};
    if(average(arr2) == 8){
        printf("ok\n");   
    } else {
        printf("bad\n");
    }
}

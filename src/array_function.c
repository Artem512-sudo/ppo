#include "../include/array_function.h"

void join_int_arrays(int *src1, size_t size_src1, int *src2, size_t size_src2, int *dest) {
    for (int i = 0; i < size_src1; i++){
        dest[i] = src1[i];
    }
    for (int i = 0; i < size_src2; i++){
        dest[size_src1 + i]=src2[i];
    }
}

void join_and_sort_int_arrays(int* src1, size_t size_src1, int* src2, size_t size_src2, int* dest) {
    int cnt = 0;
    for (int i = 0; i < size_src1; i++){
        dest[i] = src1[i];
        cnt = cnt + 1;
    }
    for (int i = 0; i < size_src2; i++){
        dest[size_src1 + i]=src2[i];
        cnt = cnt + 1;
    }
    int tp;
    for (int i = 0; i < cnt -1; i++){
        for(int j = 0; j < cnt -1; j++){
            if (dest[j] > dest[j +1]){
                tp = dest[j];
                dest[j] = dest[j + 1];
                dest[j + 1] = tp;
            }
        }
    }
}

void get_min_and_max_from_int_array(int* src, size_t size, int* min, int* max) {
    *min = src[0];
    *max = src[0];
    for ( int i = 0; i < size; i++){
        if (src[i] > *max) *max = src[i];
        if (src[i] < *min) *min = src[i];
    }
}


#include "../include/advanced_array_function.h"

int max_subarray_sum(int* nums, int size) {
  int msum = nums[0];
  int sum = nums[0];
    for (int i = 1; i < size; i++){
        if (sum < 0){
            sum = nums[i];
        }else{
            sum += nums[i];
        }
        if (sum > msum){
            msum = sum;
        }

    }
    return msum;
}

int length_of_lis(int* nums, int numsSize) {
  if (numsSize == 0) return 0;
  int mlen = 1;
  int len = 1;
    for (int i = 1; i < numsSize; i++){
      if (nums[i] > nums[i-1]){
        len++;
      }else{
        len = 1;
      }
      if (len > mlen){
        mlen = len;
      }

    }
    return mlen;
}



int* merge(int* intervals, int intervalsSize, int* returnSize) {

}



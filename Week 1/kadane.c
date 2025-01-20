int maxSubArray(int* nums, int numsSize) {
    
    int total = 0, max = nums[0];
    for(int i=0; i<numsSize; i++){
        total = total + nums[i];
        if(total>max){
            max = total;
        }
        if(total<0){
            total = 0;
        }
    }
    
    return max;
}
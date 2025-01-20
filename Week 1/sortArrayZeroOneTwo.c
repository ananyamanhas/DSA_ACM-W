void sortColors(int* nums, int numsSize) {
    int zeroes=0, ones=0, twos=0,i;

    for(i =0; i<numsSize; i++){
        if(nums[i]==0)
        zeroes++;
        else if(nums[i]==1)
        ones++;
        else if(nums[i]==2)
        twos++;
    }

    
    for(i = 0; i<zeroes; i++){
        nums[i] = 0;
    }
    for(; i<ones+zeroes; i++){
        nums[i] = 1;
    }
    for(; i<numsSize; i++){
        nums[i] = 2;
    }

    
}
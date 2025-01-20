void nextPermutation(int* nums, int numsSize) {
    int ind = -1, temp,  smallest = - 1;;
    for(int i = numsSize-2; i>=0; i--){
        if(nums[i] <nums[i+1]){
            ind = i;
            break;
        }
    }
    if(ind == -1){
        for(int i = 0; i<numsSize/2; i++){
            temp =nums[i];
            nums[i] = nums[numsSize-1-i];
            nums[numsSize-1-i] = temp;
        }

    }

    else{
        for (int i = numsSize - 1; i > ind; i--) {
            if (nums[i] > nums[ind]) {
                smallest = i;
                break;
            }
        }
        temp = nums[ind];
        nums[ind] = nums[smallest];
        nums[smallest] = temp;

        for (int i = ind + 1, j = numsSize - 1; i < j; i++, j--) {
       
        temp = nums[i];
        nums[i] = nums[j];
        nums[j] = temp;
    }
}
    }



    

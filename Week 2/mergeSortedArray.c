void merge(int* nums1, int nums1Size, int m, int* nums2, int nums2Size, int n) {
    int min, temp;
        for(int i=m; i<nums1Size+nums2Size; i++){
            nums1[i]=nums2[i-nums1Size];
        }
        min = nums1[0];
        for(int i=0; i<nums1Size+nums2Size;i++){
            if(nums1[i]>nums1[i+1]){
                temp = nums1[i];
                nums1[i]=nums1[i+1];
                nums1[i+1] = temp;
            }
        }
}
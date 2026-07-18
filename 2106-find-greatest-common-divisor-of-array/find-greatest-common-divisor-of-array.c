int findGCD(int* nums, int numsSize) {
    int min = nums[0], max = nums[0], a, b;
    for(int i = 1; i < numsSize; i++) {
        if(nums[i] <= min) {
            min = nums[i];
        }
        if(nums[i] >= max) {
            max = nums[i];
        }
    }
    a = max, b = min;
    while(b != 0) {
        int temp = b;
        b = a % b;
        a = temp;
    }
    return a;
}
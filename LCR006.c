/**
 * Note: The returned array must be malloced, assume caller calls free().
 */

int* twoSum(int* nums, int numsSize, int target, int* returnSize) {
    int *res = (int*)malloc(sizeof(int)*2);
    *returnSize = 2;
    int i = 0, j = numsSize - 1;
    while(nums[i] + nums[j] != target)
    {
        if(nums[i] + nums[j] > target)
            j--;
        else if(nums[i] + nums[j] < target)
            i++;
    }
    res[0] = i;
    res[1] = j;
    return res;
}

//https://leetcode.com/problems/remove-element/
int removeElement(int* nums, int numsSize, int val) {
    int k = 0;  // index for placing elements not equal to val

    for (int i = 0; i < numsSize; i++) {
        if (nums[i] != val) {
            nums[k] = nums[i];  // keep the element
            k++;
        }
    }

    return k;  // number of elements not equal to val
}
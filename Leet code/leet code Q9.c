//https://leetcode.com/problems/remove-duplicates-from-sorted-array/
int removeDuplicates(int* nums, int numsSize) {
    if (numsSize == 0) return 0;

    int k = 1;  // Index for next unique element

    for (int i = 1; i < numsSize; i++) {
        if (nums[i] != nums[k - 1]) {  // Found a new unique element
            nums[k] = nums[i];
            k++;
        }
    }

    return k;
}
/* https://leetcode.com/problems/check-if-all-1s-are-at-least-length-k-places-away/?envType=daily-question&envId=2025-11-17*/
bool kLengthApart(int* nums, int numsSize, int k) {
    int prev = -1;   // stores index of previous 1

    for (int i = 0; i < numsSize; i++) {
        if (nums[i] == 1) {
            if (prev != -1) {
                // check distance between this 1 and previous 1
                if (i - prev - 1 < k) {
                    return false;
                }
            }
            prev = i; // update previous 1 position
        }
    }
    return true;
}
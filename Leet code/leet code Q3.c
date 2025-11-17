//https://leetcode.com/problems/two-sum/
#include <stdlib.h>

typedef struct {
    int key;
    int value;
} HashItem;

int hash(int key, int size) {
    if (key < 0) key = -key;
    return key % size;
}

int* twoSum(int* nums, int numsSize, int target, int* returnSize) {
    *returnSize = 2;
    int* result = (int*)malloc(2 * sizeof(int));

    // Simple hash table (size = numsSize * 2)
    int tableSize = numsSize * 2;
    HashItem* hashTable = (HashItem*)malloc(tableSize * sizeof(HashItem));

    // Initialize the table
    for (int i = 0; i < tableSize; i++) {
        hashTable[i].key = 0x3f3f3f3f;  // mark as empty
        hashTable[i].value = -1;
    }

    for (int i = 0; i < numsSize; i++) {
        int complement = target - nums[i];
        int h = hash(complement, tableSize);

        // Search for complement
        while (hashTable[h].value != -1) {
            if (hashTable[h].key == complement) {
                result[0] = hashTable[h].value;
                result[1] = i;
                free(hashTable);
                return result;
            }
            h = (h + 1) % tableSize;
        }

        // Insert current number
        h = hash(nums[i], tableSize);
        while (hashTable[h].value != -1) {
            h = (h + 1) % tableSize;
        }
        hashTable[h].key = nums[i];
        hashTable[h].value = i;
    }

    free(hashTable);
    return NULL;  // Should never reach because problem guarantees one solution.
}
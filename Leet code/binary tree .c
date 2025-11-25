//https://leetcode.com/problems/binary-tree-inorder-traversal/
/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     struct TreeNode *left;
 *     struct TreeNode *right;
 * };
 */

void traverse(struct TreeNode* root, int* arr, int* idx) {
    if (root == NULL) return;

    traverse(root->left, arr, idx);   // Left
    arr[(*idx)++] = root->val;        // Visit
    traverse(root->right, arr, idx);  // Right
}

int* inorderTraversal(struct TreeNode* root, int* returnSize) {
    *returnSize = 0;

    // Allocate maximum possible size (total nodes ≤ 100 for LeetCode)
    int* result = (int*)malloc(100 * sizeof(int));
    if (!result) return NULL;

    traverse(root, result, returnSize);

    return result;
}
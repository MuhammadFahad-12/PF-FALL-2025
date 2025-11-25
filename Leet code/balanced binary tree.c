//https://leetcode.com/problems/balanced-binary-tree/
/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     struct TreeNode *left;
 *     struct TreeNode *right;
 * };
 */

int checkHeight(struct TreeNode* root) {
    if (root == NULL)
        return 0;  // height of empty tree

    int leftHeight = checkHeight(root->left);
    if (leftHeight == -1) return -1;  // left subtree not balanced

    int rightHeight = checkHeight(root->right);
    if (rightHeight == -1) return -1; // right subtree not balanced

    // If height difference > 1 → not balanced
    if (abs(leftHeight - rightHeight) > 1)
        return -1;

    // Return height of subtree
    return 1 + (leftHeight > rightHeight ? leftHeight : rightHeight);
}

bool isBalanced(struct TreeNode* root) {
    return checkHeight(root) != -1;
}
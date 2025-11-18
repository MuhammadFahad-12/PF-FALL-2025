//https://leetcode.com/problems/symmetric-tree/
bool isMirror(struct TreeNode* left, struct TreeNode* right) {
    // If both are NULL, they are mirrors
    if (left == NULL && right == NULL)
        return true;

    // If only one is NULL, not mirrors
    if (left == NULL || right == NULL)
        return false;

    // Values must match AND
    // left->left must mirror right->right
    // left->right must mirror right->left
    return (left->val == right->val) &&
           isMirror(left->left, right->right) &&
           isMirror(left->right, right->left);
}

bool isSymmetric(struct TreeNode* root) {
    if (root == NULL)
        return true;

    return isMirror(root->left, root->right);
}
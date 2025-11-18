//https://leetcode.com/problems/same-tree/description/
bool isSameTree(struct TreeNode* p, struct TreeNode* q) {
    // If both are NULL, trees are same
    if (p == NULL && q == NULL)
        return true;

    // If one is NULL and other is not, trees are different
    if (p == NULL || q == NULL)
        return false;

    // If values don't match, trees are different
    if (p->val != q->val)
        return false;

    // Recursively check left and right subtrees
    return isSameTree(p->left, q->left) && isSameTree(p->right, q->right);
}
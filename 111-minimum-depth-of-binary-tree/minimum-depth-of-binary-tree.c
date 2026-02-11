/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     struct TreeNode *left;
 *     struct TreeNode *right;
 * };
 */
int minDepth(struct TreeNode* root) {
    if(root == NULL) return 0;
    int l = minDepth(root -> left);
    int r = minDepth(root -> right);
    return ((r == 0 || l < r)  && l != 0 ? l : r) + 1;
}
/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     struct TreeNode *left;
 *     struct TreeNode *right;
 * };
 */
int dfs(struct TreeNode* root) {
    if(root == NULL) return 0;
    int l = dfs(root -> left);
    int r = dfs(root -> right);
    return ((r == 0 || l < r)  && l != 0 ? l : r) + 1;
}
int minDepth(struct TreeNode* root) {
    return dfs(root);
}
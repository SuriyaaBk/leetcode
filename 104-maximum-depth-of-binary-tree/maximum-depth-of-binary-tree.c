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
    return (l > r ? l : r) + 1;
}
int maxDepth(struct TreeNode* root) {
    return dfs(root);
}
/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     struct TreeNode *left;
 *     struct TreeNode *right;
 * };
 */
bool ans;
int dfs(struct TreeNode* root) {
    if(root == NULL) return 0;
    int l = dfs(root -> left);
    int r = dfs(root -> right);
    if(l - r > 1 || r - l > 1) ans = false;
    return (l > r ? l : r) + 1;
}
bool isBalanced(struct TreeNode* root) {
    ans = true;
    dfs(root);
    return ans;
}
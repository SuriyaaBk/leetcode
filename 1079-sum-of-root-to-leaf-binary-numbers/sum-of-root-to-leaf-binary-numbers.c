/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     struct TreeNode *left;
 *     struct TreeNode *right;
 * };
 */
int dfs(struct TreeNode* root, int sum) {
    if(root == NULL) return 0;
    sum = (sum << 1) + root -> val;
    if(root -> left == NULL && root -> right == NULL) return sum;
    return dfs(root -> left, sum) + dfs(root -> right, sum);
}
int sumRootToLeaf(struct TreeNode* root) {
    return dfs(root, 0);
}
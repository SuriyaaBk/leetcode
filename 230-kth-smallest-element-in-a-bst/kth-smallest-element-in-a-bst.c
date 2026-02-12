/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     struct TreeNode *left;
 *     struct TreeNode *right;
 * };
 */
int n, ans;
void inorder(struct TreeNode* root) {
    if(root == NULL) return;
    inorder(root -> left);
    if(--n == 0) {
        ans = root -> val;
        return;
    }
    inorder(root -> right);
}
int kthSmallest(struct TreeNode* root, int k) {
    n = k;
    inorder(root);
    return ans;
}
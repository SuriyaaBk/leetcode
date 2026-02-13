/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     struct TreeNode *left;
 *     struct TreeNode *right;
 * };
 */
int a, b;
void traversal(struct TreeNode* root) {
    if(root == NULL) return;
    if(root -> val != a) b = root -> val;
    traversal(root -> left);
    traversal(root -> right);
}
bool isUnivalTree(struct TreeNode* root) {
    if(root == NULL) return true;
    a = root -> val, b = root -> val;
    traversal(root);
    return a == b;
}
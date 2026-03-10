/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     struct TreeNode *left;
 *     struct TreeNode *right;
 * };
 */
void reverse(struct TreeNode* l, struct TreeNode* r, int level) {
    if(l == NULL || r == NULL) return;
    level += 1;
    if(level % 2 == 1) {
        int temp = l -> val;
        l -> val = r -> val;
        r -> val = temp;
    }
    reverse(l -> left, r -> right, level);
    reverse(l -> right, r -> left, level);
}
struct TreeNode* reverseOddLevels(struct TreeNode* root) {
    if(root == NULL) return NULL;
    int level = 0;
    reverse(root -> left, root -> right, level);
    return root;
}
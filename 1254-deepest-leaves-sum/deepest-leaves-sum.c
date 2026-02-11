/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     struct TreeNode *left;
 *     struct TreeNode *right;
 * };
 */
int height_of_tree(struct TreeNode* root) {
    if(root == NULL) return 0;
    int l = height_of_tree(root -> left);
    int r = height_of_tree(root -> right);
    return (l > r ? l : r) + 1;
}
int preorder(struct TreeNode* root, int current, int height) {
    if(root == NULL) return 0;
    if(current == height) return root -> val;
    int l = preorder(root -> left, current + 1, height);
    int r = preorder(root -> right, current + 1, height);
    return l + r;
}
int deepestLeavesSum(struct TreeNode* root) {
    int height = height_of_tree(root);
    int sum = preorder(root, 1, height);
    return sum;
}
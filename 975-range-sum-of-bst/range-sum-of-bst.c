/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     struct TreeNode *left;
 *     struct TreeNode *right;
 * };
 */
int calculate(struct TreeNode* root, int low, int high) {
    if(root == NULL) return 0;
    int sum = 0;
    if(root -> val >= low && root -> val <= high) sum += root -> val;
    sum += calculate(root -> left, low, high);
    sum += calculate(root -> right, low, high);
    return sum;
}
int rangeSumBST(struct TreeNode* root, int low, int high) {
    return calculate(root, low, high);
}
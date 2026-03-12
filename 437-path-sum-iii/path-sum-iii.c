/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     struct TreeNode *left;
 *     struct TreeNode *right;
 * };
 */
int sum(struct TreeNode* root, long targetSum) {
    if(root == NULL) return 0;
    int count = 0;
    if(root -> val == targetSum) count++;
    count += sum(root -> left, targetSum - root -> val) + sum(root -> right, targetSum - root -> val);
    return count;
}
int pathSum(struct TreeNode* root, int targetSum) {
    if(root == NULL) return 0;
    return sum(root, targetSum) + pathSum(root -> left, targetSum) + pathSum(root -> right, targetSum);
}
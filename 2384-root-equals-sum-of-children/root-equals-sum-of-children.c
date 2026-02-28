/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     struct TreeNode *left;
 *     struct TreeNode *right;
 * };
 */
bool checkTree(struct TreeNode* root) {
    int sum1 = root -> val, sum2 = 0;
    struct TreeNode* root2 = root;
    while(root -> left != NULL) {
        root = root -> left;
        sum2 += root -> val;
        root2 = root2 -> right;
        sum2 += root2 -> val;
    }
    return sum1 == sum2;
}
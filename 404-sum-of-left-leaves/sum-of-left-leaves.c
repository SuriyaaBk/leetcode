/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     struct TreeNode *left;
 *     struct TreeNode *right;
 * };
 */
int sum;
void calculate(struct TreeNode* root) {
    if(root == NULL) return;
    if(root -> left != NULL && root -> left -> left == NULL && root -> left -> right == NULL) sum += root -> left -> val;
        calculate(root -> left);
        calculate(root -> right);

}
int sumOfLeftLeaves(struct TreeNode* root) {
    sum = 0;
    calculate(root);
    return sum;
}
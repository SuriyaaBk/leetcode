/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     struct TreeNode *left;
 *     struct TreeNode *right;
 * };
 */
long min1, min2;
void calculate(struct TreeNode* root) {
    if(root == NULL) return;
    int value = root -> val;
    if(value < min1) {
        min2 = min1;
        min1 = value; 
    } else if(value < min2 && value > min1) min2 = value;
    calculate(root -> left);
    calculate(root -> right);
}
int findSecondMinimumValue(struct TreeNode* root) {
    min1 = LONG_MAX, min2 = LONG_MAX;
    calculate(root);
    return min2 == LONG_MAX ? -1 : min2;
}
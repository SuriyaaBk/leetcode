/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     struct TreeNode *left;
 *     struct TreeNode *right;
 * };
 */
/**
 * Note: The returned array must be malloced, assume caller calls free().
 */
int j;
void postorder(struct TreeNode* root, int* ans) {
    if(root == NULL) return;
    postorder(root -> left, ans);
    postorder(root -> right, ans);
    ans[j++] = root -> val;
}
int* postorderTraversal(struct TreeNode* root, int* returnSize) {
    j = 0;
    int* ans = (int*)malloc(101 * sizeof(int));
    postorder(root, ans);
    *returnSize = j;
    return ans;
}
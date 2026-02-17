/**
 * Definition for a Node.
 * struct Node {
 *     int val;
 *     int numChildren;
 *     struct Node** children;
 * };
 */

/**
 * Note: The returned array must be malloced, assume caller calls free().
 */
int j;
void Post_Order(struct Node* root, int* ans) {
    if(root == NULL) return;
    for(int i = 0; i < root -> numChildren; i++) {
        Post_Order(root -> children[i], ans);
    }
    ans[j++] = root -> val;
}
int* postorder(struct Node* root, int* returnSize) {
    j = 0;
    int* ans = (int*)malloc(10001 * sizeof(int));
    Post_Order(root, ans);
    *returnSize = j;
    return ans;
}
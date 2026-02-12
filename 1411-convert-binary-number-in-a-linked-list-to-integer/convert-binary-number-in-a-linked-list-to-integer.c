/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     struct ListNode *next;
 * };
 */
int maxBit(struct ListNode* head, int n) {
    if(head == NULL) return n;
    while(head -> next != NULL) {
        n *= 2;
        head = head -> next;
    } 
    return n;
}
int getDecimalValue(struct ListNode* head) {
    int ans = 0, n = 1;
    n = maxBit(head, n);
    while(head != NULL) {
        ans += head -> val * n;
        head = head -> next;
        n /= 2;
    }
    return ans;
}
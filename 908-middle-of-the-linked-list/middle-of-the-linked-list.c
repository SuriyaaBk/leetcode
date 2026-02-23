/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     struct ListNode *next;
 * };
 */
struct ListNode* middleNode(struct ListNode* head) {
    struct ListNode* curr = head;
    int len = 0;
    while(curr != NULL) {
        curr = curr -> next;
        len += 1;
    }
    len /= 2;
    for(int i = 0; i < len; i++) head = head -> next;
    return head;
}
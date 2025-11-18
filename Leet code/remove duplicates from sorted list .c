//https://leetcode.com/problems/remove-duplicates-from-sorted-list/
/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     struct ListNode *next;
 * };
 */

struct ListNode* deleteDuplicates(struct ListNode* head) {
    if (head == NULL) return NULL;

    struct ListNode* current = head;

    while (current != NULL && current->next != NULL) {
        if (current->val == current->next->val) {
            // Duplicate found → delete next node
            struct ListNode* temp = current->next;
            current->next = temp->next;
            free(temp);
        } else {
            // Move to next node
            current = current->next;
        }
    }

    return head;
}
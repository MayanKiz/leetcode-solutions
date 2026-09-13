/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     struct ListNode *next;
 * };
 */

struct ListNode* addTwoNumbers(struct ListNode* l1, struct ListNode* l2) {

    struct ListNode* dummy = malloc(sizeof(struct ListNode));//asaaannn haiiiiiiiiiiiiiiiiii
    dummy->val = 0;
    dummy->next = NULL;

    struct ListNode* curr = dummy;

    int carry = 0;

    while (l1 != NULL || l2 != NULL || carry != 0) {

        int sum = carry;

        if (l1 != NULL) {
            sum = sum + l1->val;
            l1 = l1->next;
        }

        if (l2 != NULL) {
            sum = sum + l2->val;
            l2 = l2->next;
        }

        carry = sum / 10;

        curr->next = malloc(sizeof(struct ListNode));
        curr->next->val = sum % 10;
        curr->next->next = NULL;

        curr = curr->next;
    }

    return dummy->next;
}
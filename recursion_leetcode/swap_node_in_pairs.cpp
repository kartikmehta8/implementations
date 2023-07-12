class Solution {
public:
    
    void swap(ListNode* A, ListNode* B) {
        int t = A->val;
        A->val = B->val;
        B->val = t;
    }
    
    void reverse(ListNode* t, ListNode* n) {
        swap(t, n);
        ListNode* nextNode = n->next;
        if (nextNode == NULL || nextNode->next == NULL) return;
        reverse(nextNode, nextNode->next);
    }
    
    ListNode* swapPairs(ListNode* head) {
        if (head == NULL) return NULL;
        if (head->next == NULL) return head;
        ListNode* t = head;
        reverse(t, t->next);
        return head;
    }
};
Node* deleteMiddle(Node* head){
    if (head->next == NULL) return NULL;
    Node *slow = head, *fast = head, *prev;
    while (fast != NULL && fast->next) {
        fast = fast->next->next;
        prev = slow;
        slow = slow->next;
    }
    prev->next = prev->next->next;
    return head;
}
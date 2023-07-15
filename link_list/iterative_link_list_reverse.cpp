Node* reverseLinkedList(Node *head) {
    if (head == NULL) return NULL;
    Node *curr = head->next, *prev = head;
    prev->next = NULL;
    while (curr != NULL) {
        Node* next = curr->next;
        curr->next = prev;
        prev = curr;
        curr = next;
    }
    return prev;
}
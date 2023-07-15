Node *findMiddle(Node *head) {
    Node *slow = head, *fast = head;
    while (fast != NULL && fast->next) {
        fast = fast->next->next;
        slow = slow->next;
    }
    return slow;
}
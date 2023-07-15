Node *findMiddle(Node *head) {
    Node *slow = head, *fast = head;
    while (fast != NULL && fast->next) {
        fast = fast->next->next;
        slow = slow->next;
    }
    return slow;
}

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

bool isPalindrome(Node *head) {
    Node *middle = findMiddle(head), *start = head;
    Node *end = reverseLinkedList(middle);
    while (end != NULL) {
        if (end->data != start->data) return false;
        end = end->next;
        start = start->next;
    }
    return true;
}
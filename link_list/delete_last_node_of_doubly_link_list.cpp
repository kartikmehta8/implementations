Node * deleteLastNode(Node *head) {
    if (head == NULL) return NULL;
    Node* t = head;
    if (t->next == NULL) return NULL;
    while (t->next && t->next->next != NULL) t = t->next;
    t->next = NULL;
    return head;
}

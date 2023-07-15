int length(Node *head) {
    int count = 0;
    Node* t = head;
    while (t != NULL) {
        t = t->next;
        count++;
    }
    return count;
}
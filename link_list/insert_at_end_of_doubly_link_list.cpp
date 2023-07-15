Node * insertAtTail(Node *head, int k) {
    Node *newNode = new Node(k), *t = head;
    if (head == NULL) {
        head = newNode;
        return head;
    }
    while (t->next != NULL) t = t->next;
    t->next = newNode;
    newNode->prev = t;
    return head;
}

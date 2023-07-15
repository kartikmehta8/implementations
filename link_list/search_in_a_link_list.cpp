int searchInLinkedList(Node<int> *head, int k) {
    Node<int>* t = head;
    while (t != NULL) {
        if (t->data == k) return 1;
        t = t->next;
    }
    return 0;
}
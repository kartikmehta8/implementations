#include <bits/stdc++.h>
Node* reverseDLL(Node* head) {   
    Node *front = head, *rear = head, *test = NULL;
    while (rear->next != NULL) rear = rear->next;
    while (front != rear){
        if (test == rear) break;
        int num = front->data;
        front->data = rear->data;
        rear->data = num;
        test = front;
        front = front->next;
        rear = rear->prev;
    }
    return head;
}
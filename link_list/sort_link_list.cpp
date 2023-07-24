Node* sortList(Node* head){
    Node* dummy = new Node(-1);
        
        while (head) {
            Node* next = head->next;
            Node* temp = dummy;
            
            while (temp->next && temp->next->data < head->data) temp = temp->next;
            
            head->next = temp->next;
            temp->next = head;
            head = next;
        }
        
        return dummy->next;
}
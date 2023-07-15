int lengthOfLoop(Node *head) {
    Node *slow = head, *fast = head;
    while (fast && fast->next) {
        slow = slow->next;
        fast = fast->next->next;
        if (fast == slow) {
            int count = 1;
            fast = fast->next;
            while (fast != slow) {
                count++;
                fast = fast->next;
            }
            return count;
        }
    }
    return 0;
}
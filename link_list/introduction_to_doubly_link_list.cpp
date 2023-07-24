/*
 * Definition for doubly-linked list.
 * class Node
 * {
 * public:
 *    int data;
 *    Node *next, *prev;
 *    Node() : data(0), next(nullptr), prev(nullptr) {}
 *    Node(int x) : data(x), next(nullptr), prev(nullptr) {}
 *    Node(int x, Node *next, Node *prev) : data(x), next(next), prev(prev) {}
 * };
 */

Node* constructDLL(vector<int>& arr) {
    Node* root = NULL, *t = NULL;
    for (auto it: arr) {
        if (root == NULL) {
            root = new Node(it);
            t = root;
        }
        else {
            t->next = new Node(it);
            t->next->prev = t;
            t = t->next;
        }
    }
    return root;
}

/**
 * Definition of linked list
 * class Node {
 *
 * public:
 *     int data;
 *     Node* next;
 *     Node() : data(0), next(nullptr) {}
 *     Node(int x) : data(x), next(nullptr) {}
 *     Node(int x, Node* next) : data(x), next(next) {}
 * };
 */

Node* constructLL(vector<int>& arr) {
    Node* root = NULL, *t = NULL;
    for (auto it: arr) {
        if (root == NULL) {
            root = new Node(it);
            t = root;
        }
        else {
            t->next = new Node(it);
            t = t->next;
        }
    }
    return root;
}
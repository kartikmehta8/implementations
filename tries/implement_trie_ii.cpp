#include <bits/stdc++.h> 

struct Node {
    Node* links[26];
    int countEndWith = 0;
    int countPrefixWith = 0;

    bool containsKey(char ch) {
        return links[ch-'a'] != NULL;
    }

    Node* get(char ch) {
        return links[ch-'a'];
    }

    void put(char ch, Node* node) {
        links[ch-'a'] = node;
    }

    void increaseEnd() {
        countEndWith++;
    }

    void increasePrefix() {
        countPrefixWith++;
    }

    void deleteEnd() {
        countEndWith--;
    }

    void reducePrefix() {
        countPrefixWith--;
    }

    int getEnd() {
        return countEndWith;
    }

    int getPrefix() {
        return countPrefixWith;
    }
};

class Trie{

    private:

    Node* root;

    public:

    Trie(){
        root = new Node();
    }

    void insert(string &word){
        Node* node = root;
        for (int i = 0; i < word.size(); i++) {
            if (!node->containsKey(word[i])) {
                node->put(word[i], new Node());
            }
            node = node->get(word[i]);
            node->increasePrefix();
        }
        node->increaseEnd();
    }

    int countWordsEqualTo(string &word){
        Node* node = root;
        for (int i = 0; i < word.size(); i++) {
            if (node->containsKey(word[i])) {
                node = node->get(word[i]);
            } else return 0;
        }
        return node->getEnd();
    }

    int countWordsStartingWith(string &word) {
        Node* node = root;
        for (int i = 0; i < word.size(); i++) {
            if (node->containsKey(word[i])) {
                node = node->get(word[i]);
            } else return 0;
        }
        return node->getPrefix();
    }

    void erase(string &word){
        Node* node = root;
        for (int i = 0; i < word.size(); i++) {
            if (node->containsKey(word[i])) {
                node = node->get(word[i]);
                node->reducePrefix();
            } else return;
        }
        node->deleteEnd();
    }
};


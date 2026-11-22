#include <bits/stdc++.h>
using namespace std;

struct Node {
    char ch;
    int freq;
    Node *left, *right;
};
struct Compare {
    bool operator()(Node* a, Node* b) { return a->freq > b->freq; }
};

void printCodes(Node* root, string code) {
    if (!root->left && !root->right) {
        cout << root->ch << ": " << (code.empty() ? "0" : code) << '\n';
        return;
    }
    printCodes(root->left, code + '0');
    printCodes(root->right, code + '1');
}

int main() {
    int n; cin >> n;
    priority_queue<Node*, vector<Node*>, Compare> pq;
    for (int i = 0; i < n; i++) {
        char ch; int freq;
        cin >> ch >> freq;
        pq.push(new Node{ch, freq, nullptr, nullptr});
    }
    if (pq.empty()) return 0;
    while (pq.size() > 1) {
        Node* a = pq.top(); pq.pop();
        Node* b = pq.top(); pq.pop();
        pq.push(new Node{'\0', a->freq + b->freq, a, b});
    }
    printCodes(pq.top(), "");
}

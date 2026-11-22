#include <bits/stdc++.h>
using namespace std;

struct Node {
    char ch;
    long long freq;
    Node *left, *right;
    Node(char c, long long f, Node* l = nullptr, Node* r = nullptr)
        : ch(c), freq(f), left(l), right(r) {}
};

struct Compare {
    bool operator()(Node* a, Node* b) { return a->freq > b->freq; }
};

void printCodes(Node* root, string code) {
    if (!root->left && !root->right) {
        cout << root->ch << " : " << (code.empty() ? "0" : code) << '\n';
        return;
    }
    printCodes(root->left, code + '0');
    printCodes(root->right, code + '1');
}

void deleteTree(Node* root) {
    if (!root) return;
    deleteTree(root->left);
    deleteTree(root->right);
    delete root;
}

int main() {
    int n;
    cin >> n;
    if (n <= 0) return 0;
    priority_queue<Node*, vector<Node*>, Compare> pq;
    for (int i = 0; i < n; i++) {
        char c; long long f;
        cin >> c >> f;
        if (f <= 0) return cout << "Invalid frequency\n", 0;
        pq.push(new Node(c, f));
    }
    while (pq.size() > 1) {
        Node* a = pq.top(); pq.pop();
        Node* b = pq.top(); pq.pop();
        pq.push(new Node('\0', a->freq + b->freq, a, b));
    }
    Node* root = pq.top();
    printCodes(root, "");
    deleteTree(root);
}

#include <bits/stdc++.h>
using namespace std;

struct Node { int data; Node* next; };
Node* topNode = nullptr;

void push(int x) { topNode = new Node{x, topNode}; }

void pop() {
    if (!topNode) { cout << "Underflow\n"; return; }
    Node* temp = topNode;
    cout << "Popped: " << temp->data << '\n';
    topNode = topNode->next;
    delete temp;
}

void display() {
    for (Node* p = topNode; p; p = p->next) cout << p->data << ' ';
    cout << '\n';
}

int main() {
    int choice, x;
    while (cin >> choice && choice != 5) {
        if (choice == 1) { cin >> x; push(x); }
        else if (choice == 2) pop();
        else if (choice == 3) {
            if (topNode) cout << "Top: " << topNode->data << '\n';
            else cout << "Empty\n";
        }
        else if (choice == 4) display();
    }
    while (topNode) { Node* p = topNode; topNode = p->next; delete p; }
}

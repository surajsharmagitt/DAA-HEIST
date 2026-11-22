#include <bits/stdc++.h>
using namespace std;

struct Node { int data; Node* next; };
Node *frontNode = nullptr, *rearNode = nullptr;

void enqueue(int x) {
    Node* p = new Node{x, nullptr};
    if (rearNode) rearNode->next = p;
    else frontNode = p;
    rearNode = p;
}

void dequeue() {
    if (!frontNode) { cout << "Underflow\n"; return; }
    Node* p = frontNode;
    cout << "Deleted: " << p->data << '\n';
    frontNode = frontNode->next;
    if (!frontNode) rearNode = nullptr;
    delete p;
}

void display() {
    for (Node* p = frontNode; p; p = p->next) cout << p->data << ' ';
    cout << '\n';
}

int main() {
    int choice, x;
    while (cin >> choice && choice != 5) {
        if (choice == 1) { cin >> x; enqueue(x); }
        else if (choice == 2) dequeue();
        else if (choice == 3) {
            if (frontNode) cout << "Front: " << frontNode->data << '\n';
            else cout << "Empty\n";
        }
        else if (choice == 4) display();
    }
    while (frontNode) { Node* p = frontNode; frontNode = p->next; delete p; }
}

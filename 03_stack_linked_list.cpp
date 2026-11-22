#include <iostream>
using namespace std;

struct Node {
    int data; Node* next;
    Node(int x, Node* p) : data(x), next(p) {}
};
Node* topNode = 0;

void push(int x) { topNode = new Node(x, topNode); }

void pop() {
    if (!topNode) { cout << "Empty\n"; return; }
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
    while (true) {
        cout << "1.Push 2.Pop 3.Peek 4.Display 5.Exit\nEnter choice: ";
        if (!(cin >> choice) || choice == 5) break;
        if (choice == 1) { cout << "Enter value to push: "; cin >> x; push(x); }
        else if (choice == 2) pop();
        else if (choice == 3) {
            if (topNode) cout << "Top: " << topNode->data << '\n';
            else cout << "Empty\n";
        } else if (choice == 4) display();
    }
    while (topNode) { Node* p = topNode; topNode = p->next; delete p; }
}

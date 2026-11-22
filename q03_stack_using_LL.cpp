#include <iostream>

using namespace std;

struct Node {
    int data;
    Node* next;
};

Node* topNode = nullptr;

void push(int x) {
    topNode = new Node{x, topNode};
    cout << x << " pushed\n";
}

void pop() {
    if (!topNode) {
        cout << "Stack Underflow\n";
        return;
    }
    Node* temp = topNode;
    cout << "Popped: " << temp->data << '\n';
    topNode = topNode->next;
    delete temp;
}

void peek() {
    if (topNode) cout << "Top: " << topNode->data << '\n';
    else cout << "Stack Empty\n";
}

void display() {
    if (!topNode) {
        cout << "Stack Empty\n";
        return;
    }
    cout << "Stack elements: ";
    for (Node* p = topNode; p; p = p->next) cout << p->data << ' ';
    cout << '\n';
}

int main() {
    int choice, x;
    while (true) {
        cout << "1.Push 2.Pop 3.Peek 4.Display 5.Exit: ";
        if (!(cin >> choice) || choice == 5) break;
        if (choice == 1) {
            cout << "Enter value: ";
            cin >> x;
            push(x);
        } else if (choice == 2) {
            pop();
        } else if (choice == 3) {
            peek();
        } else if (choice == 4) {
            display();
        }
    }
    while (topNode) {
        Node* p = topNode;
        topNode = p->next;
        delete p;
    }
    return 0;
}

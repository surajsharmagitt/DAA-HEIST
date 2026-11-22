#include <iostream>

using namespace std;

struct Node {
    int data;
    Node* next;
};

Node *frontNode = nullptr, *rearNode = nullptr;

void enqueue(int x) {
    Node* p = new Node{x, nullptr};
    if (rearNode) rearNode->next = p;
    else frontNode = p;
    rearNode = p;
    cout << x << " enqueued\n";
}

void dequeue() {
    if (!frontNode) {
        cout << "Queue Underflow\n";
        return;
    }
    Node* p = frontNode;
    cout << "Deleted: " << p->data << '\n';
    frontNode = frontNode->next;
    if (!frontNode) rearNode = nullptr;
    delete p;
}

void frontElement() {
    if (frontNode) cout << "Front: " << frontNode->data << '\n';
    else cout << "Queue Empty\n";
}

void display() {
    if (!frontNode) {
        cout << "Queue Empty\n";
        return;
    }
    cout << "Queue elements: ";
    for (Node* p = frontNode; p; p = p->next) cout << p->data << ' ';
    cout << '\n';
}

int main() {
    int choice, x;
    while (true) {
        cout << "1.Enqueue 2.Dequeue 3.Front 4.Display 5.Exit: ";
        if (!(cin >> choice) || choice == 5) break;
        if (choice == 1) {
            cout << "Enter value: ";
            cin >> x;
            enqueue(x);
        } else if (choice == 2) {
            dequeue();
        } else if (choice == 3) {
            frontElement();
        } else if (choice == 4) {
            display();
        }
    }
    while (frontNode) {
        Node* p = frontNode;
        frontNode = p->next;
        delete p;
    }
    return 0;
}

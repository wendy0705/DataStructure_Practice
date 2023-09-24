#include <iostream>

using namespace std;

struct Node {
    int Data;
    Node* link;
};

Node* head = nullptr;

void Push(int item) {
    Node* temp = new Node;
    temp->Data = item;
    temp->link = head;
    head = temp;
}

int Pop() {
    if (head == nullptr) {
        cout << "Stack is empty" << endl;
    } else {
        Node* temp = head;
        int item = head->Data;
        head = head->link;
        delete temp; // Use "delete" to free memory allocated with "new"
        return item;
    }
}

int main() {
    Push(5);
    Push(10);
    
    cout << Pop() << endl;
    cout << Pop() << endl;
    cout << Pop() << endl; // Trying to pop from an empty stack
    return 0;
}


#include <iostream>
using namespace std;

// Define the structure of a node
struct Node {
    int data;
    Node* next;
};

int main() {
    // Create three nodes dynamically
    Node* head = new Node;
    Node* second = new Node;
    Node* third = new Node;

    // Store data and connect the nodes
    head->data = 10;
    head->next = second;

    second->data = 20;
    second->next = third;

    third->data = 30;
    third->next = NULL;

    // Traverse the linked list
    Node* temp = head;

    cout << "Linked List: ";

    while (temp != NULL) {
        cout << temp->data << " -> ";
        temp = temp->next;
    }

    cout << "NULL" << endl;

    // Release dynamically allocated memory
    delete head;
    delete second;
    delete third;

    return 0;
}


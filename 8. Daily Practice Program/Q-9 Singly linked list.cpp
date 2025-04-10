#include <iostream>
using namespace std;

struct Node {
    double data;  
    Node* next; 

    Node(double  value) {  
        data = value;
        next = nullptr;
    }
};

int main() {
    // Creating nodes
    Node* first = new Node(1);
    Node* second = new Node(2);
    Node* third = new Node(3);
    Node* fourth = new Node(4);
    Node* fifth = new Node(5);

    // Linking nodes
    first->next = second;
    second->next = third;
    third->next = fourth;
    fourth->next = fifth;

    // Display values and addresses
    Node* temp = first;
    while (temp != nullptr) {
        cout << "Value: " << temp->data << ", Address: " << temp << endl;
        temp = temp->next;
    }
}
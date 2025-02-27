
// ## ** 2. Code Implementation **

// Implement the following CRUD operations in C++ for each data structure:

// 1** Linked List (Singly Linked List) **
// - Insert a node at the beginning, middle, and end.
// - Display all elements.
// - Update a node’s value.
// - Delete a node by value and position.

#include <iostream>
using namespace std;

struct Node
{
    int data;
    Node *next;
};

class LinkedList
{
private:
    Node *head; 

public:
    LinkedList() 
    { 
        head = nullptr; 
    } 

    void insertAtBeginning(int value)
    {
        Node *newNode = new Node();
        newNode->data = value;
        newNode->next = head;
        head = newNode;
    }

    void insertAtEnd(int value)
    {
        Node *newNode = new Node();
        newNode->data = value;
        newNode->next = nullptr;

        if (head == nullptr)
        { 
            head = newNode;
            return;
        }

        Node *temp = head;
        while (temp->next != nullptr)
        { 
            temp = temp->next;
        }
        temp->next = newNode;
    }

    void insertAtPosition(int value, int pos)
    {
        if (pos <= 0)
        {
            cout << "Invalid position!\n";
            return;
        }

        Node *newNode = new Node();
        newNode->data = value;

        if (pos == 1)
        { 
            newNode->next = head;
            head = newNode;
            return;
        }

        Node *temp = head;
        for (int i = 1; temp != nullptr && i < pos - 1; i++)
        {
            temp = temp->next;
        }

        if (temp == nullptr)
        {
            cout << "Position out of range!\n";
            return;
        }

        newNode->next = temp->next;
        temp->next = newNode;
    }

    void display()
    {
        if (head == nullptr)
        {
            cout << "List is empty!\n";
            return;
        }

        Node *temp = head;
        while (temp != nullptr)
        {
            cout << temp->data << " -> ";
            temp = temp->next;
        }
        cout << "NULL\n";
    }

    void updateNode(int oldVal, int newVal)
    {
        Node *temp = head;
        while (temp != nullptr)
        {
            if (temp->data == oldVal)
            {
                temp->data = newVal;
                cout << "Updated " << oldVal << " to " << newVal << endl;
                return;
            }
            temp = temp->next;
        }
        cout << "Value not found in list!\n";
    }

    void deleteByValue(int value)
    {
        if (head == nullptr)
        {
            cout << "List is empty!\n";
            return;
        }

        if (head->data == value)
        { 
            Node *temp = head;
            head = head->next;
            delete temp;
            cout << "Deleted " << value << endl;
            return;
        }

        Node *temp = head;
        Node *prev = nullptr;

        while (temp != nullptr && temp->data != value)
        {
            prev = temp;
            temp = temp->next;
        }

        if (temp == nullptr)
        {
            cout << "Value not found!\n";
            return;
        }

        prev->next = temp->next;
        delete temp;
        cout << "Deleted " << value << endl;
    }

    void deleteByPosition(int pos)
    {
        if (head == nullptr || pos <= 0)
        {
            cout << "Invalid position!\n";
            return;
        }

        if (pos == 1)
        { 
            Node *temp = head;
            head = head->next;
            delete temp;
            cout << "Deleted node at position " << pos << endl;
            return;
        }

        Node *temp = head;
        Node *prev = nullptr;

        for (int i = 1; temp != nullptr && i < pos; i++)
        {
            prev = temp;
            temp = temp->next;
        }

        if (temp == nullptr)
        {
            cout << "Position out of range!\n";
            return;
        }

        prev->next = temp->next;
        delete temp;
        cout << "Deleted node at position " << pos << endl;
    }
};

int main()
{
    LinkedList list;
    int choice, value, pos;

    do
    {
        cout << "\n********** MENU **********\n";
        cout << "1. Insert at Beginning\n";
        cout << "2. Insert at End\n";
        cout << "3. Insert at Position\n";
        cout << "4. Display List\n";
        cout << "5. Update a Node\n";
        cout << "6. Delete by Value\n";
        cout << "7. Delete by Position\n";
        cout << "0. Exit\n";
        cout << "Enter your choice: ";
        cin >> choice;

        switch (choice)
        {
        case 1:
            cout << "Enter value to insert at beginning: ";
            cin >> value;
            list.insertAtBeginning(value);
            break;

        case 2:
            cout << "Enter value to insert at end: ";
            cin >> value;
            list.insertAtEnd(value);
            break;

        case 3:
            cout << "Enter value and position to insert: ";
            cin >> value >> pos;
            list.insertAtPosition(value, pos);
            break;

        case 4:
            cout << "Current Linked List: ";
            list.display();
            break;

        case 5:
            int oldVal, newVal;
            cout << "Enter value to update and new value: ";
            cin >> oldVal >> newVal;
            list.updateNode(oldVal, newVal);
            break;

        case 6:
            cout << "Enter value to delete: ";
            cin >> value;
            list.deleteByValue(value);
            break;

        case 7:
            cout << "Enter position to delete: ";
            cin >> pos;
            list.deleteByPosition(pos);
            break;

        case 0:
            cout << "Exiting program...\n";
            break;

        default:
            cout << "Invalid choice! Try again.\n";
        }

    } 
    while (choice != 0);
}
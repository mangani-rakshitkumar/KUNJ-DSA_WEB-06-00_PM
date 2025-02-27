// 2** Stack (Using Linked List or Array) **

// - Push (Insert element).
// - Pop (Remove element).
// - Peek (Get the top element).
// - Display all stack elements.

#include <iostream>
#include <vector>
using namespace std;

class Stack
{
private:
    vector<int> stack; 
    int maxSize;    

public:

    Stack(int maxSize)
    {
        this->maxSize = maxSize; 
    }

    void push(int value)
    {
        if (stack.size() == maxSize)
        {
            cout << "Stack Overflow! Cannot push more elements.\n";
            return; 
        }
        stack.push_back(value);             
        cout << "Pushed: " << value << endl; 
    }

    void pop()
    {
        if (stack.empty())
        {
            cout << "Stack Underflow! Nothing to pop.\n";
            return;
        }
        cout << "Popped: " << stack.back() << endl; 
        stack.pop_back();                          
    }

    void peek()
    {
        if (stack.empty())
        {
            cout << "Stack is empty!\n";
            return;
        }
        cout << "Top element: " << stack.back() << endl;
    }

    void display()
    {
        if (stack.empty())
        {
            cout << "Stack is empty!\n";
            return;
        }
        cout << "Stack elements: ";
        for (int i = stack.size() - 1; i >= 0; i--)
        {                            
            cout << stack[i] << " "; 
        }
        cout << endl;
    }
};

int main()
{
    int maxSize; 
    cout << "Enter the maximum size of the stack: ";
    cin >> maxSize; 

    Stack stack(maxSize); 
    int choice;
    int value;

    do
    {
        cout << "\n********** STACK MENU **********\n";
        cout << "1. Push (Insert)\n";
        cout << "2. Pop (Remove)\n";
        cout << "3. Peek (Top Element)\n";
        cout << "4. Display Stack\n";
        cout << "0. Exit\n";
        cout << "Enter your choice: ";
        cin >> choice; 

        switch (choice)
        {
        case 1:
            cout << "Enter integer to push: ";
            cin >> value;      
            stack.push(value); 
            break;
        case 2:
            stack.pop(); 
            break;
        case 3:
            stack.peek(); 
            break;
        case 4:
            stack.display(); 
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
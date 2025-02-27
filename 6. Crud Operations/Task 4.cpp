// 3** Queue (Using Linked List or Array) **

// - Enqueue (Insert element).
// - Dequeue (Remove element).
// - Display all queue elements.
// - Check if the queue is empty or full (in case of array-based queue).

#include <iostream>
#include <vector>
using namespace std;

class Queue
{
private:
    vector<int> queue; 
    int maxSize;      

public:
    
    Queue(int maxSize)
    {
        this->maxSize = maxSize; 
    }

    void enqueue(int value)
    {
        if (queue.size() == maxSize)
        {
            cout << "Queue Overflow! Cannot enqueue more elements.\n";
            return;
        }
        queue.push_back(value);               
        cout << "Enqueued: " << value << endl; 
    }

    void dequeue()
    {
        if (queue.empty())
        {
            cout << "Queue Underflow! Nothing to dequeue.\n";
            return;
        }
        cout << "Dequeued: " << queue.front() << endl; 
        queue.erase(queue.begin());                 
    }

    void peek()
    {
        if (queue.empty())
        {
            cout << "Queue is empty!\n";
            return;
        }
        cout << "Front element: " << queue.front() << endl; 
    }

    void display()
    {
        if (queue.empty())
        {
            cout << "Queue is empty!\n";
            return;
        }
        cout << "Queue elements (from front to rear): ";
        for (int i = 0; i < queue.size(); i++)
        {                       
            cout << queue[i] << " "; 
        }
        cout << endl;
    }
};

int main()
{
    int maxSize; 
    cout << "Enter the maximum size of the queue: ";
    cin >> maxSize; 

    Queue queue(maxSize); 
    int choice;
    int value;

    do
    {
        cout << "\n********** QUEUE MENU **********\n";
        cout << "1. Enqueue (Insert)\n";
        cout << "2. Dequeue (Remove)\n";
        cout << "3. Peek (Front Element)\n";
        cout << "4. Display Queue\n";
        cout << "0. Exit\n";
        cout << "Enter your choice: ";
        cin >> choice;

        switch (choice)
        {
        case 1:
            cout << "Enter integer to enqueue: ";
            cin >> value;
            queue.enqueue(value);
            break;
        case 2:
            queue.dequeue();
            break;
        case 3:
            queue.peek();
            break;
        case 4:
            queue.display();
            break;
        case 0:
            cout << "Exiting program... Thank you for using the queue!\n";
            break;
        default:
            cout << "Invalid choice! Please select a valid option.\n";
        }
    } 
    while (choice != 0);
}
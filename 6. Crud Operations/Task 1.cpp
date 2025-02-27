// ** Task Description. **

// ** 1. Write answers to the following questions in VS Code as comments('//' in C++). **

//-------------------------------------------------------------------------------------------------------------------------------------

// Q-1: What is a Linked List, and how does it differ from an Array?
// Ans:
// Key Differences Between Linked List and Array:

// 1. Memory Allocation:
// Linked List: Dynamic (nodes allocated in runtime)
// Array: Static (allocated at compile-time)

// 2. Access Time:
// Linked List: O(n) (traversal required)
// Array: O(1) (direct access via index)

// 3. Insertion/Deletion:
// Linked List: Efficient (O(1) at the beginning or end)
// Array: Expensive (O(n) for shifting elements)

// 4. Contiguous Storage:
// Linked List: No (nodes are scattered in memory)
// Array: Yes (stored in continuous memory blocks)

// 5. Size:
// Linked List: Flexible (grows/shrinks dynamically)
// Array: Fixed (predefined at declaration)

// 6. Memory Overhead:
// Linked List: More (extra pointer for each node)
// Array: Less (no extra pointer needed)

// 7. Cache Performance:
// Linked List: Poor (due to scattered memory)
// Array: Better (due to contiguous memory)

//-------------------------------------------------------------------------------------------------------------------------------------


// Q-2: What are Singly Linked List, Doubly Linked List, and Circular Linked List?
// Ans:

// Singly Linked List: A Singly Linked List consists of nodes where each node contains:

// * Data (stores the value)
// * Next pointer (points to the next node in the list)
// * Characteristics:
// 1. Each node points to the next node only
// 2. raversal is unidirectional (only forward)
// 3. Memory-efficient (only one pointer per node)

// Doubly Linked List: A Doubly Linked List consists of nodes where each node contains:

// * Data (stores the value)
// * Next pointer (points to the next node)
// * Prev pointer (points to the previous node)
// * Characteristics:
// 1. Can be traversed in both directions (forward & backward)
// 2. Easier insertion & deletion compared to SLL
// 3. Requires extra memory (stores two pointers)

// Circular Linked List: A Circular Linked List is similar to a Singly or Doubly Linked List, except that:

// * The last node’s pointer points to the first node, forming a loop
// * No node has NULL as a pointer
// * Types of Circular Linked Lists:
// 1. Singly Circular Linked List → Last node’s next points to the first node
// 2. Doubly Circular Linked List → Last node’s next points to the first & prev points to the last

//-------------------------------------------------------------------------------------------------------------------------------------

// Q-3: What is a Stack, and how does it follow the LIFO (Last In, First Out) principle?
// Ans:

// * What is a Stack?

// A Stack is a linear data structure that follows the LIFO (Last In, First Out) principle. It allows elements to be added (push) and removed (pop)
// only from one end, called the top.

// * LIFO (Last In, First Out) Principle:

//  - LIFO means that the last element inserted is the first one to be removed.
//  - Example: Think of a stack of plates in a cafeteria.
//  1. You add plates on top (push).
//  2. You remove the top plate first (pop).

// * LIFO in Action:

// - Let's push numbers 10, 20, and 30 onto the stack:
// - Step 1: Push Operations:
// Push(10) → Stack: [10]
// Push(20) → Stack: [10, 20]
// Push(30) → Stack: [10, 20, 30]

// - Step 2: Pop Operations:
// Pop() → Removes 30 → Stack: [10, 20]
// Pop() → Removes 20 → Stack: [10]

// - Last In → 30 (added last) → First Out

//-------------------------------------------------------------------------------------------------------------------------------------

// Q-4: What is a Queue, and how does it follow the FIFO (First In, First Out) principle?
// Ans:

// * What is a Queue?
// - A Queue is a linear data structure that follows the FIFO (First In, First Out) principle. This means that the first element added is the first
//  one to be removed (like people standing in a queue).

// * FIFO (First In, First Out) Principle:
// - FIFO means that elements are inserted from the rear (back) and removed from the front.

// * Real-Life Example of FIFO:
// - Imagine a queue of people waiting at a ticket counter:
// 1. The first person who arrives is served first.
// 2. The last person will have to wait until everyone ahead is served.

// * FIFO in Action:
// - Let's enqueue (insert) numbers 10, 20, and 30 into a queue:
// - Step 1: Enqueue Operations (Insertion at Rear)
// Enqueue(10) → Queue: [10]
// Enqueue(20) → Queue: [10, 20]
// Enqueue(30) → Queue: [10, 20, 30]

// - Step 2: Dequeue Operations (Deletion from Front):
// Dequeue() → Removes 10 → Queue: [20, 30]
// Dequeue() → Removes 20 → Queue: [30]

// - First In → 10 (added first) → First Out.

//-------------------------------------------------------------------------------------------------------------------------------------

// Q-5: What is the difference between Queue and Stack?
// Ans:

// Key Differences Between Queue and Stack:

// 1. Order:
// Queue (FIFO): First In, First Out (FIFO)
// Stack (LIFO): Last In, First Out (LIFO)

// 2. Insertion:
// Queue (FIFO): Performed at the rear (enqueue)
// Stack (LIFO): Performed at the top (push)

// 3. Deletion:
// Queue (FIFO): Performed from the front (dequeue)
// Stack (LIFO): Performed from the top (pop)

// 4. Access:
// Queue (FIFO): Elements are processed in arrival order
// Stack (LIFO): Last inserted element is processed first

// 5. Structure:
// Queue (FIFO): Works like a line (queue of people)
// Stack (LIFO): Works like a stack of plates

// 6. Use Cases:
// Queue (FIFO): Used in task scheduling, process management, BFS, buffering
// Stack (LIFO): Used in function calls, undo/redo operations, DFS, backtracking

// 7. Implementation:
// Queue (FIFO): Implemented using array or linked list
// Stack (LIFO): Implemented using array or linked list

//-------------------------------------------------------------------------------------------------------------------------------------

// Q-6: Explain dynamic memory allocation using `new` and `delete` in C++.
// Ans:

// * Dynamic Memory Allocation in C++ (new and delete)

// 1. What is Dynamic Memory Allocation?
// - Dynamic memory allocation allows us to allocate memory at runtime (during program execution) instead of compile time. It is useful when the
// amount of required memory is unknown in advance.

// 2. Why Use Dynamic Memory Allocation?
// - Efficient memory usage (allocates only when needed).
// - Flexible array size (useful when array size is unknown).
// - No fixed memory waste (unlike static arrays).

// 3. Syntax:
// pointer_variable = new data_type;
// - Allocates memory for one variable of data_type and returns a pointer to it.

// 4. Example: Allocating a Single Variable:

// #include <iostream>
// using namespace std;

// int main()
// {
//     int *ptr = new int;

//     *ptr = 42;
//     cout << "Value at ptr: " << *ptr << endl;

//     delete ptr;
// }

// new int; dynamically allocates memory for an integer.
// delete ptr; releases the allocated memory to prevent memory leaks.

// 5. Allocating an Array Dynamically:
// - The new operator can also allocate arrays dynamically.

// 6. Syntax:
// pointer_variable = new data_type[size];

// 7. Example: Allocating and Using a Dynamic Array:

// #include <iostream>
// using namespace std;

// int main() {
//     int n;
//     cout << "Enter size of array: ";
//     cin >> n;

//     int* arr = new int[n];

//     for (int i = 0; i < n; i++)
//     {
//         arr[i] = (i + 1) * 10;
//     }

//     cout << "Array elements: ";
//     for (int i = 0; i < n; i++)
//     {
//         cout << arr[i] << " ";
//     }

//     cout << endl;

//     delete[] arr;
// }

// - new int[n]; allocates memory for an array of size n.
// - delete[] arr; releases the entire array memory.

// 8. delete Operator (Memory Deallocation):
// - The delete operator is used to free dynamically allocated memory.

// 9. Syntax:
// delete pointer_variable;
// delete[] pointer_variable;

// 10. Important:
// - Always use delete after new to prevent memory leaks
// - Use delete[] when deallocating an array.

// 11. Dynamic Memory Allocation with Classes:
// - You can also allocate objects dynamically using new.

// 12. Example: Dynamic Object Allocation:

// #include <iostream>
// using namespace std;

// class Student
// {
// public:
//     string name;
//     int age;

//     void display()
//     {
//         cout << "Name: " << name << ", Age: " << age << endl;
//     }
// };

// int main()
// {
//     Student *s1 = new Student(); 
//     s1->name = "Alice";
//     s1->age = 20;

//     s1->display(); 

//     delete s1; 
// }

// - new Student(); dynamically allocates a Student object.
// - delete s1; releases memory allocated for the object.

// 13. Memory Leaks & Best Practices:

// * Memory Leak:
// - Occurs when allocated memory is not freed using delete, leading to unnecessary memory consumption.

// * Best Practices:
// - Always use delete after new.
// - Use smart pointers (unique_ptr, shared_ptr) to manage memory automatically.
// - Always check if new allocation was successful before using the pointer.
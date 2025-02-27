// ##** Task Description **

// ** 1. Write answers in VS Code as comments **

// Q-1: What is Bubble Sort, and how does it work?
// Ans: Bubble Sort

// Bubble Sort is a simple sorting algorithm that works by repeatedly swapping adjacent elements if they are in the wrong order. This process 
// continues until the entire array is sorted.

//How Bubble Sort Works:
// 1. Start from the first element of the array.
// 2. Compare the current element with the next element.
// 3. If the current element is greater than the next element, swap them.
// 4. Move to the next pair and repeat step 3.
// 5. Continue this process until the largest element moves to the last position in the first pass.
// 6. Repeat the above steps for the remaining elements (excluding the last sorted element) until the entire array is sorted.

// Q-2: Explain the time complexity of Bubble Sort in the best, worst, and average cases.  
// Ans:

// 1. Worst Case Time Complexity O(n^2):
// When does it occur?
// The worst case occurs when the array is sorted in reverse order (completely unsorted).
// Example: arr = [5, 4, 3, 2, 1]

// 2. Best Case Time Complexity O(n): 
// When does it occur?
// The best case occurs when the array is already sorted.
// Example: arr = [1, 2, 3, 4, 5]

// 3. Average Case Time Complexity O(n^2): 
// When does it occur?
// The average case occurs when the array elements are randomly arranged.

// Q-3: What is the space complexity of Bubble Sort?  
// Ans:

// Space Complexity of Bubble Sort
// Bubble Sort is an in-place sorting algorithm, meaning it does not use extra memory apart from a few variables for swapping.
// Space Complexity: O(1)

// Q-4: Why is Bubble Sort not the most efficient sorting algorithm?  
// Ans: 

// Bubble Sort is not considered the most efficient sorting algorithm because it has a time complexity of O(n^2), meaning the number of 
// operations required to sort a list grows quadratically with the size of the list, making it very slow for large datasets; it repeatedly compares
// and swaps adjacent elements, which can lead to a high number of unnecessary comparisons, especially when dealing with already mostly sorted data.

// Q-5: How can we optimize Bubble Sort? 
// Ans:

// Introduce a boolean flag (swapped) to track whether a swap happens.
// If no swaps occur in a pass, exit early (array is already sorted).

// --------------------------------------------------------------------------------------------------------------------------------------------------

// ** 2. Practical Exercise **

// ** Task 1: Implement Bubble Sort in C++ **

// - Write a C++ program to sort an array of integers using Bubble Sort.  
// - Implement a function bubbleSort(int arr[], int n) that sorts the array.  
// - Print the array before and after sorting.  

#include <iostream>
using namespace std;

int main() 
{
    int size;
    cout << "Enter number of elements: ";
    cin >> size;

   
    int* arr = new int[size];

    cout << "Enter " << size << " elements:" << endl;
    for (int i = 0; i < size; i++) 
    {
        cin >> arr[i];
    }

    for (int i = 0; i < size - 1; i++) 
    {
        
        for (int j = 0; j < size-i-1; j++) 
        {
            if (arr[j] > arr[j + 1]) 
            {
                swap(arr[j], arr[j+1]);
            }
        }
    }

   
    cout << "Sorted array: ";
    for (int i = 0; i < size; i++) 
    {
        cout << arr[i] << " ";
    }
    cout << endl;

    
    delete[] arr;
}
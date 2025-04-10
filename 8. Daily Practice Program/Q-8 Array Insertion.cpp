#include <iostream>
using namespace std;

class User {
public:
    int size;   
    int arr[100];  

   
    void create(int size) {
        this->size = size; 
        cout << "Enter " << size << " elements: ";
        for (int i = 0; i < size; i++) {
            cin >> arr[i];
        }
        cout << "Array created successfully!\n";
    }

   
    void read() {
        if (size == 0) {
            cout << "Array is empty!\n";
            return;
        }
        cout << "Array elements: ";
        for (int i = 0; i < size; i++) {
            cout << arr[i] << " ";
        }
        cout << endl;
    }

    
    void insert(int index, int value) {
        if (index < 0 || index > size) {
            cout << "Invalid index!\n";
            return;
        }

        for (int i = size; i > index; i--) {
            arr[i] = arr[i - 1];
        }

        arr[index] = value;
        size++;  
        cout << "Inserted successfully!\n";
    }

    
    void remove(int index) {
        if (index < 0 || index >= size) {
            cout << "Invalid index!\n";
            return;
        }

        for (int i = index; i < size - 1; i++) {
            arr[i] = arr[i + 1];  
        }

        size--; 
        cout << "Deleted successfully!\n";
    }
};

int main() {
    User s1;
    int choice, size, index, value;

    do {
        cout << "\nMenu:\n";
        cout << "1. Create Array\n";
        cout << "2. Display Array\n";
        cout << "3. Insert Element\n";
        cout << "4. Delete Element\n";
        cout << "0. Exit\n";
        cout << "Enter your choice: ";
        cin >> choice;

        switch (choice) {
        case 1:
            cout << "Enter the size of the array: ";
            cin >> size;
            s1.create(size);
            break;
        case 2:
            s1.read();
            break;
        case 3:
            cout << "Enter index to insert: ";
            cin >> index;
            cout << "Enter new value: ";
            cin >> value;
            s1.insert(index, value);
            break;
        case 4:
            cout << "Enter index to delete: ";
            cin >> index;
            s1.remove(index);
            break;
        case 0:
            cout << "Exiting program.\n";
            break;
        default:
            cout << "Invalid choice! Try again.\n";
        }
    } while (choice != 0);

    return 0;
}
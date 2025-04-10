#include <iostream>
using namespace std;

int main() {
    int choice, id, value;
    int data[10] = {0}; // initialize with zeros
    int size = 0;

    while (true) {
        cout << "1. Insert" << endl;
        cout << "2. Read" << endl;
        cout << "3. Update" << endl;
        cout << "4. Delete" << endl;
        cout << "5. Exit" << endl;
        cout << "Enter your choice: ";
        cin >> choice;

        switch (choice) {
            case 1:
                if (size < 10) {
                    cout << "Enter ID: ";
                    cin >> id;
                    cout << "Enter Value: ";
                    cin >> value;
                    data[id] = value;
                    size++;
                    cout << "Insertion successful!" << endl;
                } else {
                    cout << "Data is full!" << endl;
                }
                break;
            case 2:
                cout << "Enter ID to read: ";
                cin >> id;
                if (id >= 0 && id < 10) {
                    cout << "Value: " << data[id] << endl;
                } else {
                    cout << "Invalid ID!" << endl;
                }
                break;
            case 3:
                cout << "Enter ID to update: ";
                cin >> id;
                cout << "Enter new Value: ";
                cin >> value;
                if (id >= 0 && id < 10) {
                    data[id] = value;
                    cout << "Update successful!" << endl;
                } else {
                    cout << "Invalid ID!" << endl;
                }
                break;
            case 4:
                cout << "Enter ID to delete: ";
                cin >> id;
                if (id >= 0 && id < 10) {
                    data[id] = 0;
                    cout << "Deletion successful!" << endl;
                } else {
                    cout << "Invalid ID!" << endl;
                }
                break;
            case 5:
                return 0;
            default:
                cout << "Invalid choice!" << endl;
        }
    }

    return 0;
}
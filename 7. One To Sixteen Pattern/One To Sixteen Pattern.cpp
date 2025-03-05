#include <iostream>
using namespace std;

// Pattern 1: Right Half Pyramid
void pattern1() {
    for (int i = 1; i <= 5; i++) {
        for (int j = 1; j <= i; j++) {
            cout << "* ";
        }
        cout << endl;
    }
}

// Pattern 2: Left Half Pyramid
void pattern2() {
    for (int i = 1; i <= 5; i++) {
        for (int j = 1; j <= 5 - i; j++) {
            cout << "  ";
        }
        for (int j = 1; j <= i; j++) {
            cout << "* ";
        }
        cout << endl;
    }
}

// Pattern 3: Full Pyramid
void pattern3() {
    for (int i = 1; i <= 5; i++) {
        for (int j = 1; j <= 5 - i; j++) {
            cout << "  ";
        }
        for (int j = 1; j <= (2 * i - 1); j++) {
            cout << "* ";
        }
        cout << endl;
    }
}

// Pattern 4: Inverted Right Half Pyramid
void pattern4() {
    for (int i = 5; i >= 1; i--) {
        for (int j = 1; j <= i; j++) {
            cout << "* ";
        }
        cout << endl;
    }
}

// Pattern 5: Inverted Left Half Pyramid
void pattern5() {
    for (int i = 5; i >= 1; i--) {
        for (int j = 1; j <= 5 - i; j++) {
            cout << "  ";
        }
        for (int j = 1; j <= i; j++) {
            cout << "* ";
        }
        cout << endl;
    }
}

// Pattern 6: Inverted Full Pyramid
void pattern6() {
    for (int i = 5; i >= 1; i--) {
        for (int j = 1; j <= 5 - i; j++) {
            cout << "  ";
        }
        for (int j = 1; j <= (2 * i - 1); j++) {
            cout << "* ";
        }
        cout << endl;
    }
}

// Pattern 7: Rhombus Pattern
void pattern7() {
    for (int i = 1; i <= 5; i++) {
        for (int j = 1; j <= 5 - i; j++) {
            cout << "  ";
        }
        for (int j = 1; j <= 5; j++) {
            cout << "* ";
        }
        cout << endl;
    }
}

// Pattern 8: Diamond Pattern
void pattern8() {
    pattern3();  // Full Pyramid
    pattern6();  // Inverted Full Pyramid
}

// Pattern 9: Hourglass Pattern
void pattern9() {
    pattern6();  // Inverted Full Pyramid
    pattern3();  // Full Pyramid
}

// Pattern 10: Hollow Square Pattern
void pattern10() {
    for (int i = 1; i <= 5; i++) {
        for (int j = 1; j <= 5; j++) {
            if (i == 1 || i == 5 || j == 1 || j == 5)
                cout << "* ";
            else
                cout << "  ";
        }
        cout << endl;
    }
}

// Pattern 11: Hollow Full Pyramid
void pattern11() {
    for (int i = 1; i <= 5; i++) {
        for (int j = 1; j <= 5 - i; j++) {
            cout << "  ";
        }
        for (int j = 1; j <= (2 * i - 1); j++) {
            if (j == 1 || j == (2 * i - 1) || i == 5)
                cout << "* ";
            else
                cout << "  ";
        }
        cout << endl;
    }
}

// Pattern 12: Hollow Inverted Full Pyramid
void pattern12() {
    for (int i = 5; i >= 1; i--) {
        for (int j = 1; j <= 5 - i; j++) {
            cout << "  ";
        }
        for (int j = 1; j <= (2 * i - 1); j++) {
            if (j == 1 || j == (2 * i - 1) || i == 5)
                cout << "* ";
            else
                cout << "  ";
        }
        cout << endl;
    }
}

// Pattern 13: Hollow Diamond Pyramid
void pattern13() {
    for (int i = 1; i <= 5; i++) {
        for (int j = 1; j <= 5 - i; j++) {
            cout << "  ";
        }
        for (int j = 1; j <= 2 * i - 1; j++) {
            if (j == 1 || j == 2 * i - 1)
                cout << "* ";
            else
                cout << "  ";
        }
        cout << endl;
    }
    for (int i = 4; i >= 1; i--) {
        for (int j = 1; j <= 5 - i; j++) {
            cout << "  ";
        }
        for (int j = 1; j <= 2 * i - 1; j++) {
            if (j == 1 || j == 2 * i - 1)
                cout << "* ";
            else
                cout << "  ";
        }
        cout << endl;
    }
}

// Pattern 14: Hollow Hourglass Pattern
void pattern14() {
    pattern12();
    pattern11();
}

// Pattern 15: Floyd's Triangle
void pattern15() {
    int num = 1;
    for (int i = 1; i <= 5; i++) {
        for (int j = 1; j <= i; j++) {
            cout << num++ << " ";
        }
        cout << endl;
    }
}

// Pattern 16: Pascal's Triangle
void pattern16() {
    int coef = 1;
    for (int i = 0; i < 5; i++) {
        for (int j = 1; j <= 5 - i; j++)
            cout << "  ";
        for (int j = 0; j <= i; j++) {
            if (j == 0 || i == 0)
                coef = 1;
            else
                coef = coef * (i - j + 1) / j;
            cout << coef << "   ";
        }
        cout << endl;
    }
}

int main() {
    int choice;

    do {
        cout << "Select a pattern to display:\n";
        cout << "1. Right Half Pyramid\n";
        cout << "2. Left Half Pyramid\n";
        cout << "3. Full Pyramid\n";
        cout << "4. Inverted Right Half Pyramid\n";
        cout << "5. Inverted Left Half Pyramid\n";
        cout << "6. Inverted Full Pyramid\n";
        cout << "7. Rhombus Pattern\n";
        cout << "8. Diamond Pattern\n";
        cout << "9. Hourglass Pattern\n";
        cout << "10. Hollow Square Pattern\n";
        cout << "11. Hollow Full Pyramid\n";
        cout << "12. Hollow Inverted Full Pyramid\n";
        cout << "13. Hollow Diamond Pyramid\n";
        cout << "14. Hollow Hourglass Pattern\n";
        cout << "15. Floyd's Triangle\n";
        cout << "16. Pascal's Triangle\n";
        cout << "Enter your choice (1-16, 0 to exit): ";
        cin >> choice;

        switch (choice) {
            case 1: pattern1(); break;
            case 2: pattern2(); break;
            case 3: pattern3(); break;
            case 4: pattern4(); break;
            case 5: pattern5(); break;
            case 6: pattern6(); break;
            case 7: pattern7(); break;
            case 8: pattern8(); break;
            case 9: pattern9(); break;
            case 10: pattern10(); break;
            case 11: pattern11(); break;
            case 12: pattern12(); break;
            case 13: pattern13(); break;
            case 14: pattern14(); break;
            case 15: pattern15(); break;
            case 16: pattern16(); break;
            case 0: cout << "Exiting...\n"; break;
            default: cout << "Invalid choice! Please try again.\n";
        }

        cout << endl;

    } while (choice != 0);

    return 0;
}
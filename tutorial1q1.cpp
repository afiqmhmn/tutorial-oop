#include <iostream>

using namespace std;

int main() {
    int choice;
    int x1, x2;

    while (true) {
        // Display Menu
        cout << "Simple calculator" << endl;
        cout << "Enter option: 1)+ 2)- 3)* 4)/ 5) mod(x1,x2) -1) Exit  Your selection -> ";
        cin >> choice;

        // Check for Exit condition
        if (choice == -1) {
            break;
        }

        // Input numbers
        cout << "\nEnter first number : ";
        cin >> x1;
        cout << "Enter second number : ";
        cin >> x2;
        cout << endl;

        // Perform operations based on selection
        switch (choice) {
            case 1:
                cout << x1 << " + " << x2 << " = " << (x1 + x2) << endl;
                break;
            case 2:
                cout << x1 << " - " << x2 << " = " << (x1 - x2) << endl;
                break;
            case 3:
                cout << x1 << " * " << x2 << " = " << (x1 * x2) << endl;
                break;
            case 4:
                if (x2 != 0)
                    cout << x1 << " / " << x2 << " = " << (x1 / x2) << endl;
                else
                    cout << "Error: Division by zero is not allowed." << endl;
                break;
            case 5:
                if (x2 != 0)
                    cout << x1 << " % " << x2 << " = " << (x1 % x2) << endl;
                else
                    cout << "Error: Division by zero is not allowed." << endl;
                break;
            default:
                cout << "Invalid selection. Please try again." << endl;
        }
    }

    return 0;
}
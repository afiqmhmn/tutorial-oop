#include <iostream>
#include <iomanip> 

using namespace std;

int main() {
    double weight, height, bmi;

    // Input weight
    cout << "Get weight in kg : ";
    cin >> weight;

    // Input height
    cout << "Get height in meter : ";
    cin >> height;

    // BMI Calculation
    if (height > 0) {
        bmi = weight / (height * height);

        // Display results with precision
        cout << fixed << setprecision(4);
        cout << "\nYour bmi = " << bmi << endl;

        // Determine weight category
        cout << "Your weight category is : ";
        if (bmi < 18.5) {
            cout << "Underweight" << endl;
        } else if (bmi >= 18.5 && bmi < 25.0) {
            cout << "Normal weight" << endl;
        } else if (bmi >= 25.0 && bmi < 30.0) {
            cout << "Overweight" << endl;
        } else {
            cout << "Obesity" << endl;
        }
    } else {
        cout << "Error: Height must be greater than zero." << endl;
    }

    return 0;
}
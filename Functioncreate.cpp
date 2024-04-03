#include <iostream>
#include <iomanip> // for setprecision()
#include <limits> // for numeric_limits

using namespace std;

void add(float num1, float num2);
void subtract(float num1, float num2);
void multiply(float num1, float num2);
void divide(float num1, float num2);

int main() {
    // Declare variables
    float num1, num2;
    char op;

    // Get user input
    cout << "Enter first number: ";
    cin >> num1;

    cout << "Enter operator (+, -, *, /): ";
    cin >> op;

    cout << "Enter second number: ";
    cin >> num2;

    // Perform calculation
    switch(op) {
        case '+':
            add(num1,num2);
            break;
        case '-':
            subtract(num1,num2);
            break;
        case '*':
            multiply(num1,num2);
            break;
        case '/':
            divide(num1,num2);
            break;
        default:
            cerr << "Error: invalid operator\n";
            return 1;
    }

    return 0;
}

void add(float num1, float num2){
    float result = num1+num2;
    cout << num1 << " " << "+" << " " << num2 << " = " 
         << setprecision(numeric_limits<double>::max_digits10) << result << endl;
}

void subtract(float num1, float num2){
    float result = num1-num2;
    cout << num1 << " " << "-" << " " << num2 << " = " 
         << setprecision(numeric_limits<double>::max_digits10) << result << endl;
}

void multiply(float num1, float num2){
    float result = num1*num2;
    cout << num1 << " " << "*" << " " << num2 << " = " 
         << setprecision(numeric_limits<double>::max_digits10) << result << endl;
}

void divide(float num1, float num2){
    if(num2 == 0){
        cerr << "Error: division by zero\n";
    }
    else{
        float result = num1/num2;
        cout << num1 << " " << "/" << " " << num2 << " = " 
             << setprecision(numeric_limits<double>::max_digits10) << result << endl;
    }
}

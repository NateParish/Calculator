

#include <iostream>
#include <string>
using namespace std;


float multiply(float num1, float num2) {
    float solution = num1 * num2;
    return solution;
}

float divide(float num1, float num2) {
    float solution = num1 / num2;
    return solution;
}

float add(float num1, float num2) {
    float solution = num1 + num2;
    return solution;

}

float subtract(float num1, float num2) {
    float solution = num1 - num2;
    return solution;

}


int main(){

    int num1, num2;
    char operation;
    float solution;
    string output;

    cout << "Enter A Number: ";
    cin >> num1; 
    cout << "Enter another Number: ";
    cin >> num2;
    cout << "Enter the operation: ";
    cin >> operation;
    //cout << num1;
    //cout << num2;


    if (operation == '*') {
        solution = multiply(num1, num2);
        cout << solution << endl;
    }

    if (operation == '/') {
        solution = divide(num1, num2);
        cout << solution << endl;
    }

    if (operation == '+') {
        solution = add(num1, num2);
        cout << solution << endl;
    }

    if (operation == '-') {
        solution = subtract(num1, num2);
        cout << solution << endl;
    }

    return 0;
}


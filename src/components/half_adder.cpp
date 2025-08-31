#include <iostream>
using namespace std;

// Function prototype
void halfAdder(bool A, bool B, bool &Sum, bool &Carry);

int main() {
    bool A, B;
    bool Sum, Carry;

    // Input
    cout << "Enter first input (0 or 1): ";
    cin >> A;
    cout << "Enter second input (0 or 1): ";
    cin >> B;

    // Call the half adder function
    halfAdder(A, B, Sum, Carry);

    // Output
    cout << "Sum: " << Sum << endl;
    cout << "Carry: " << Carry << endl;

    return 0;
}

// Function definition
void halfAdder(bool A, bool B, bool &Sum, bool &Carry) {
    // Fill in the logic here
    Sum = A ^ B;
    Carry = A && B;

    // truth table
    //
    // A | B | Sum | Carrys
    // 0   0    0     0
    // 0   1    1     0
    // 1   0    1     0
    // 1   1    1     1
}

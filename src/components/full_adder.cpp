#include <iostream>
using namespace std;

void halfAdder(bool A, bool B, bool &Sum, bool &Carry1);
void fullAdder(bool A, bool B, bool C, bool &Sum, bool &Carry2);

int main() {
    bool Input1, Input2, CarryIn;
    bool CarryOut, Sum;

    cout << "Enter first input (0 or 1): ";
    cin >> Input1;
    cout << "Enter second input (0 or 1): ";
    cin >> Input2;
    cout << "Enter Carry In (0 or 1): ";
    cin >> CarryIn;

    fullAdder(Input1, Input2, CarryIn, Sum, CarryOut);

    cout << "Sum: " << Sum << endl;
    cout << "Carry out: " << CarryOut << endl;

    return 0;
}

// Function definition for Full Adder
void fullAdder(bool Input1, bool Input2, bool CarryIn, bool &Sum, bool &CarryOut) {
    //added these for easier readability 
    bool Carry1, Carry2, Sum0;

    // truth table
    //
    // I1 |I2 |I3 | Sum | Cout
    // 0   0    0     0     0
    // 0   0    1     1     0
    // 0   1    0     1     0
    // 0   1    1     0     1
    // 1   0    0     1     0
    // 1   0    1     0     1
    // 1   1    0     0     1
    // 1   1    1     1     1
    //

    halfAdder(Input1, Input2, Sum0, Carry1); // add Input1 and Input2
    halfAdder(CarryIn, Sum0, Sum, Carry2);   // add CarryIn and sum of boht Input1 and Input2
    CarryOut = Carry1 || Carry2;             // or both carry bits
}

void halfAdder(bool A, bool B, bool &Sum, bool &Carry) {
    Sum = A ^ B;
    Carry = A && B; 
}

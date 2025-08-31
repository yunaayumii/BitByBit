#include <iostream>
using namespace std;

void halfAdder(bool A, bool B, bool &Sum, bool &Carry);

int main() {
    bool A, B;
    bool Sum, Carry;

    cout << "Enter first input (0 or 1): ";
    cin >> A;
    cout << "Enter second input (0 or 1): ";
    cin >> B;

    halfAdder(A, B, Sum, Carry);

    cout << "Sum: " << Sum << endl;
    cout << "Carry: " << Carry << endl;

    return 0;
}

void halfAdder(bool A, bool B, bool &Sum, bool &Carry) {
    // truth table
    //
    // A | B | Sum | Carrys
    // 0   0    0     0
    // 0   1    1     0
    // 1   0    1     0
    // 1   1    1     1

    Sum = A ^ B;
    Carry = A && B;
}

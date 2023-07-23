#include <iostream>
using namespace std;

int main() {
    unsigned int num1, num2;

    // Input two numbers
    cout << "Enter the first number: ";
    cin >> num1;

    cout << "Enter the second number: ";
    cin >> num2;

    // Bitwise AND
    unsigned int resultAND = num1 & num2;
    cout << "Result of bitwise AND: " << resultAND << endl;

    // Bitwise OR
    unsigned int resultOR = num1 | num2;
    cout << "Result of bitwise OR: " << resultOR << endl;

    // Bitwise XOR
    unsigned int resultXOR = num1 ^ num2;
    cout << "Result of bitwise XOR: " << resultXOR << endl;

    // Bitwise NOT
    unsigned int resultNOT1 = ~num1;
    unsigned int resultNOT2 = ~num2;
    cout << "Result of bitwise NOT (num1): " << resultNOT1 << endl;
    cout << "Result of bitwise NOT (num2): " << resultNOT2 << endl;

    // Left Shift
    unsigned int resultLeftShift = num1 << 2;
    cout << "Result of left shift (num1 << 2): " << resultLeftShift << endl;

    // Right Shift
    unsigned int resultRightShift = num2 >> 1;
    cout << "Result of right shift (num2 >> 1): " << resultRightShift << endl;

    return 0;
}

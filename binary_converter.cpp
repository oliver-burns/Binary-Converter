#include <iostream>
#include <string>
#include <limits>  // For input validation

using namespace std;

int main() {
    int n;

    // Prompt user for input with validation
    cout << "Enter a positive integer to convert: ";
    while (!(cin >> n) || n < 0) {
        cout << "Invalid input. Please enter a positive integer: ";
        cin.clear();  // Clear error flags
        cin.ignore(numeric_limits<streamsize>::max(), '\n');  // Ignore bad input
    }

    // Binary conversion
    cout << "Binary representation: ";
    if (n == 0) {
        cout << "0";
    } else {
        string binary = "";
        int temp = n;
        while (temp > 0) {
            binary = char('0' + (temp % 2)) + binary;  // Prepend to get MSB first
            temp /= 2;
        }
        cout << binary;
    }
    cout << endl;

    // Hexadecimal conversion
    cout << "Hexadecimal representation: ";
    if (n == 0) {
        cout << "0";
    } else {
        string hex = "";
        int temp = n;
        while (temp > 0) {
            int remainder = temp % 16;
            if (remainder < 10) {
                hex = char('0' + remainder) + hex;
            } else {
                hex = char('A' + (remainder - 10)) + hex;  // Uppercase A-F
            }
            temp /= 16;
        }
        cout << hex;
    }
    cout << endl;

    return 0;
}
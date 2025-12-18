#include <iostream>  // For input/output streams (cout, cin)
#include <string>    // For string manipulation
using namespace std; // Use standard namespace to avoid prefixing std::

int main() {
    int n;  // Variable to store the user's input number
    cout << "Enter a number: ";  // Prompt the user for input
    cin >> n;  // Read the integer from user input

    // Binary conversion section
    cout << "Binary: ";  // Label for binary output
    if (n == 0) {
        cout << "0";  // Special case: binary of 0 is 0
    } else {
        string binary = "";  // String to build the binary representation
        int temp = n;  // Temporary variable to avoid modifying n
        while (temp > 0) {
            // Get the least significant bit (0 or 1) and prepend it to the string
            // This builds the string in reverse, so MSB ends up first
            binary = char('0' + (temp % 2)) + binary;
            temp /= 2;  // Divide by 2 to shift right (process next bit)
        }
        cout << binary;  // Output the complete binary string
    }
    cout << endl;  // New line after binary output

    // Hexadecimal conversion section
    cout << "Hexadecimal: ";  // Label for hex output
    if (n == 0) {
        cout << "0";  // Special case: hex of 0 is 0
    } else {
        string hex = "";  // String to build the hexadecimal representation
        int temp = n;  // Temporary variable
        while (temp > 0) {
            int remainder = temp % 16;  // Get remainder when divided by 16 (0-15)
            if (remainder < 10) {
                // For 0-9, convert to '0'-'9'
                hex = char('0' + remainder) + hex;
            } else {
                // For 10-15, convert to 'A'-'F'
                hex = char('A' + (remainder - 10)) + hex;
            }
            temp /= 16;  // Divide by 16 to process next digit
        }
        cout << hex;  // Output the complete hex string
    }
    cout << endl;  // New line after hex output

    return 0;  // Indicate successful program execution
}
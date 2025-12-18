#include <iostream>
#include <string>
using namespace std;

int main() {
    int n;
    cout << "Enter a number: ";
    cin >> n;

    // Binary conversion
    cout << "Binary: ";
    if (n == 0) {
        cout << "0";
    } else {
        string binary = "";
        int temp = n;
        while (temp > 0) {
            binary = char('0' + (temp % 2)) + binary;
            temp /= 2;
        }
        cout << binary;
    }
    cout << endl;

    // Hexadecimal conversion
    cout << "Hexadecimal: ";
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
                hex = char('A' + (remainder - 10)) + hex;
            }
            temp /= 16;
        }
        cout << hex;
    }
    cout << endl;

    return 0;
}
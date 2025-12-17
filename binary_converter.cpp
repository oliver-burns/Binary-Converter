#include <iostream>
using namespace std;

int main() {
    int n;
    cout << "Enter a number: ";
    cin >> n;

    cout << "Binary: ";
    while (n > 0) {
        cout << (n % 2);
        n /= 2;
    }
    cout << endl;
    return 0;
}
#include <iostream>
using namespace std;

int main() {
    int input, factorial = 1;

    cin >> input;

    for (int i = input; i > 0; --i) {
        factorial *= i;
    }

    cout << factorial << "\n";

    return 0;
}
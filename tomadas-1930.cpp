#include <iostream>
using namespace std;

int main() {
    int input[4], acc = 0;

    for (int i = 0; i < 4; i++) {
        cin >> input[i];
        acc += input[i];
    }

    cout << acc - 3 << "\n";

    return 0;
}
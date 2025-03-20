#include <iostream>
using namespace std;

int main() {
    int n, acc1 = 0, acc2 = 0, largest;

    cin >> n;

    int array[n];

    for (int i = 0; i < n; i++) {
        cin >> array[i];
    }

    int dig_test1 = array[0], dig_test2 = 3 - array[0];

    for (int i = 0; i < n; i++) {
        if (array[i] == dig_test1) {
            acc1++;
            dig_test1 = 3 - dig_test1; // se dig_test = 1 retorna 2 e vice_versa
        }

        if (array[i] == dig_test2) {
            acc2++;
            dig_test2 = 3 - dig_test2;
        }
    }

    acc1 >= acc2 ? (largest = acc1):(largest = acc2);

    cout << largest << "\n";

    return 0;
}
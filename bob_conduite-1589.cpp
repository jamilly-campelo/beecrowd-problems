#include <iostream>
using namespace std;

int main() {
    int t;

    cin >> t;

    int output[t];
    
    for (int i = 0; i < t; i++) {
       int r1, r2;
       cin >> r1;
       cin >> r2;
       
       output[i] = r1 + r2;
    }

    for (int i = 0; i < t; i++) {
        cout << output[i] << "\n";
    }
    
    return 0;
}
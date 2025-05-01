#include <iostream>
using namespace std;

int main() {
    int n = 5;
    for (int i = 0; i < n; ++i) {
        for (int k = 0; k < i; ++k) {
            cout << "  ";
        }
        int val = 1;
        for (int j = 0; j < n - i; ++j) {
            cout << val << " ";
            val = 1 - val;
        }
        cout << endl;
    }
    return 0;
}

#include <iostream>
using namespace std;

long long fact(int n) {
    long long result = 1;
    for (int i = 1; i <= n; i++) {
        result *= i;
    }
    return result;
}

int main() {
    int n;
    if (cin >> n) {
        if (n < 0) {
            cout << "Invalid input" << endl;
        } else {
            cout << fact(n) << endl;
        }
    }
    return 0;
}

#include <iostream>
using namespace std;

// Recursive function to compute a^n
int power(int a, int n) {

    // BASE CASE: anything raised to 0 is 1
    if (n == 0)
        return 1;

    // RECURSIVE CASE: a^n = a * a^(n-1)
    return a * power(a, n - 1);
}

int main() {
    int a, n;

    cout << "Enter base: ";
    cin >> a;

    cout << "Enter power: ";
    cin >> n;

    cout << "Result = " << power(a, n);

    return 0;
}

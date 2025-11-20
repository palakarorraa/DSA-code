#include <iostream>
#include <string>
using namespace std;

void permute(string prefix, string remaining) {
    // Base case: if remaining string is empty, print the permutation
    if (remaining.length() == 0) {
        cout << prefix << endl;
        return;
    }

    // Recursive case
    for (int i = 0; i < remaining.length(); i++) {
        string newPrefix = prefix + remaining[i];
        string newRemaining = remaining.substr(0, i) + remaining.substr(i + 1);
        permute(newPrefix, newRemaining);
    }
}

void printPermutations(string s, int n) {
    // Take first n characters
    string sub = s.substr(0, n);
    permute("", sub);
}

int main() {
    string s;
    int n;

    cout << "Enter a string: ";
    cin >> s;

    cout << "Enter n: ";
    cin >> n;

    cout << "\nPermutations:\n";
    printPermutations(s, n);

    return 0;
}

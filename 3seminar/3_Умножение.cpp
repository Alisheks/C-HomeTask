#include <iostream>
#include <string>

using namespace std;

string operator*(string s, int n) {
    string output = "";
    while (n--) {
        output += s;
    }
    return output;
}


int main() {
    string word{};
    int n;

    cout << "Enter word:\t";
    cin >> word;

    cout << "Etner n:\t";
    cin >> n;

    cout << (word * n);
    return 0;
}

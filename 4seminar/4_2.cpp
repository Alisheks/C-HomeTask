#include <iostream>
#include <vector>
#include <string> 
#include <sstream>

using namespace std;

vector<int> stringToVector(const string& input) {
    vector<int> output;
    stringstream ss(input);
    int number;
    while (ss >> number) {
        output.push_back(number);
    }
    return output;
}

vector<int> lastDigits1(const vector<int>& v) {
    vector<int> result;
    for (int i : v) {
        result.push_back(i % 10);
    }
    return result;
}

void lastDigits2(vector<int>& v) {
    for (int& i : v) {
        i = i % 10;
    }
}

void lastDigits3(vector<int>* pv) {
    for (int& i : *pv) {
        i = i % 10;
    }
}

// void lastDigits4(span<int> sp) {
//     for (int& i : sp) {
//         i = i % 10;
//     }
// }

int main() {

    string input;
    cout << "Enter a list of numbers: ";
    getline(cin, input);

    vector<int> output = stringToVector(input);

    vector<int> result = lastDigits1(output);
    for (const int& x : result) {
        std::cout << x << " ";
    }
    cout << endl;
    return 0;
}

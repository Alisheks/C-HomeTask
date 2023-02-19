#include <iostream>
#include <vector>
#include <string>
#include <sstream>

using namespace std;

int sumEven(const std::vector<int>& v) {
    int sum = 0;
    for (const int& num : v) {
        if (num % 2 == 0) {
            sum += num;
        }
    }
    return sum;
}

vector<int> stringToVector(const std::string& input) {
    vector<int> output;
    stringstream ss(input);
    int number;
    while (ss >> number) {
        output.push_back(number);
    }
    return output;
}

int main() {
    string input;
    cout << "Enter a list of numbers: ";
    getline(cin, input);

    vector<int> output = stringToVector(input);

    cout << "Sum of even numbers: ";
    cout << sumEven(output) << endl;

    return 0;
}

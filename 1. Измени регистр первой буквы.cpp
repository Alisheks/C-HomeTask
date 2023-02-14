#include<iostream>
#include <string>
using namespace std;

void main()
{
    string word;

    cout << "Enter word:\t";
    cin >> word;
    int len = word.size();

    if (len == 0) {
        cout << "";
        exit()
    }

    if ((int)word[0] < 95)
        word[0] = (int)word[0] + 32;
    else
        word[0] = (int)word[0] - 32;

    cout << word << endl;

    return 0;
}
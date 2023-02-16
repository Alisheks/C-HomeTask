#include <iostream>
#include <string>
#include <string_view>

using namespace std;

string repeat1(string_view s) {
    string s2{s};
    s2 += s2;
    return s2;
}

void repeat2(string& s) {
    s += s;
    return;
}

void repeat3(string* ps) {
	*ps += *ps;
	return;
}

string* repeat4(string_view s) {
    string* s2 = new string[s.size()];
    *s2  = string(s) + string(s);
    return s2;
}


int main()
{
	string word1{}, word2{}, word3{}, word4{};

	cout << "Enter word:\t";
	cin >> word1;

	word2 = word1;

	cout << repeat1(word1) << endl;

	word3 = word2;

	repeat2(word2);
	cout << word2 << endl;

	word4 = word3;

	string* p = &word3;
	repeat3(p);
	cout << word3 << endl;

	cout << *repeat4(word4) << endl;

	return 0;
}

#include <iostream>
#include <string>
#include <string_view>

using namespace std;

string repeat1(string s)
{
	return s + s;
}

void repeat2(string& s)
{
	s.append(s);
	return;
}

void repeat3(string* ps)
{
	*ps += *ps;
	return;
}

std::string* repeat4(string s)
{
	string* p = new string[1]{ s + s };
	return p;
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
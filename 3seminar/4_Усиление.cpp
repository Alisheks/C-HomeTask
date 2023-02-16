#include <iostream>
#include <string>

using namespace std;

void truncateToDot(std::string& s)
{
	int n;
	n = s.find(".");

	s.erase(n);

	if ((int)s[0] == 34) {
		s.push_back((char)34);
	};

	return;
}


int main()
{
	string s{};

	cin >> s;

	truncateToDot(s);

	cout << s << "\n";
	return 0;
}

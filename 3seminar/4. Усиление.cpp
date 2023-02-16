#include <iostream>
#include <string>

using namespace std;

void truncateToDot(std::string& s)
{
	int n;
	n = s.find(".");

	s.erase(n);

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

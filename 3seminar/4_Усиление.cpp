#include <iostream>
#include <string>

using namespace std;

void truncateToDot(string& s) {
    
    string str = "";
    
    int i = 0;
    
    while (s[i] != 46) {
        str += s[i];
        i += 1;
    }
    
    str.push_back((char)34);
    
    s = str;
}

int main()
{
	string s{};

	cin >> s;

	truncateToDot(s);

	cout << s << "\n";
	return 0;
}

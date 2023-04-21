#include <iostream>
#include <vector>
#include <span>
#include <sstream>
using std::cout, std::cin;



std::vector<int> lastDigits1(const std::vector<int>& v)
{
	int n = v.size();

	std::vector<int> res(n);

	for (int i = 0; i < n; ++i)
		res[i] = v[i] % 10;


	return res;
}


void lastDigits2(std::vector<int>& v)
{
	for (int i = 0; i < v.size(); ++i)
	{
		v[i] %= 10;
		std::cout << v[i] << " ";
	}

	return;
}


void lastDigits3(std::vector<int>* pv)
{
	for (int i = 0; i < (*pv).size(); ++i)
	{
		(*pv)[i] %= 10;
		std::cout << (*pv)[i] << " ";
	}

	return;
}


void lastDigits4(std::span<int> sp)
{

	return;
}


std::vector<int> stringToVector(const std::string& input) {
    std::vector<int> output;
    std::stringstream ss(input);
    int number;
    while (ss >> number) {
        output.push_back(number);
    }
    return output;
}

int main()
{
    std::string input;
    cout << "Enter a list of numbers: ";
    getline(cin, input);

    std::vector<int> u = stringToVector(input);

	std::vector<int> v1 = lastDigits1(u);
	for (int i: v1)
    	std::cout << i << ' ';
    std::cout << "\n";

    lastDigits2(u);
    std::cout << "\n";

	std::vector<int>* pu = &u;
    lastDigits3(pu);
    std::cout << "\n";
}

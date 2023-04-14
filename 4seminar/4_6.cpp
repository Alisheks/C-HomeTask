#include <iostream>
#include <vector>
#include <string>
#include <span>

template <typename container>
std::vector<std:: pair<typename container:: value_type, typename container::value_type >> pairs(container& cont) {
	std::vector<std::pair<typename container::value_type, typename container::value_type>> V;
	for (int i = 0; i < cont.size(); i += 2) {
		std::pair<typename container::value_type, typename container::value_type> p;
		p.first = cont[i];
		if (i + 1 > cont.size()) {
			p.second = typename container::value_type();
		}
		else {
			p.second = cont[i + 1];
		}
		V.push_back(p);
	}
	return V;
}


int main()
{
	std::vector<int> V_4 { 1,2,3,4,5,6 }; //проверяем шестое задание, чтобы хотя бы без ошибок компилировалось
	std::vector<std::pair<int, int>> new_v4 = pairs(V_4);
	for (int i = 0; i < new_v4.size(); i++) {
		std::cout << new_v4[i].first << " " << new_v4[i].second << std::endl;
	}
}
